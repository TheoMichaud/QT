#include "dab_mainwindow.h"
#include "ui_dab_mainwindow.h"
#include <QTcpSocket>

DAB_MainWindow::DAB_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DAB_MainWindow)
{
    ui->setupUi(this);
    ui->groupBoxOperation->setEnabled(false);  //désactive le champ opération
    ui->radioButtonSolde->setChecked(true);     //coche par défaut le bouton radio solde


    socketClientBanque = new QTcpSocket;                //ma socket

    connect(socketClientBanque,&QAbstractSocket::connected,this,&DAB_MainWindow::onQTcpSocket_connected);
    connect(socketClientBanque,&QAbstractSocket::disconnected,this,&DAB_MainWindow::onQTcpSocket_disconnected);
    connect(socketClientBanque,&QAbstractSocket::readyRead,this,&DAB_MainWindow::onQTcpSocket_ReadyRead);
    connect(socketClientBanque,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,&DAB_MainWindow::onQTcpSocket_error);
}

DAB_MainWindow::~DAB_MainWindow()
{
    delete ui;
}

void DAB_MainWindow::on_pushButtonConnexion_clicked()
{
    QString ip;
    QString portS;
    quint16 port;

    ip = ui->lineEditAdresse->text();
    portS = ui->lineEditPort->text();

    port = portS.toUShort();

    if(ui->pushButtonConnexion->text()=="Connexion")            //si text du bouton connexion est connexion
    {
        socketClientBanque->connectToHost(ip,port);             //connexion


    }
    else {
        if(ui->pushButtonConnexion->text()=="Deconnexion")      //si text du bouton connexion est déconnexion
        {
            socketClientBanque->disconnectFromHost();               //déconnexion

        }
    }
}


void DAB_MainWindow::on_pushButtonEnvoi_clicked()
{
    quint16 taille=0;
    QChar commande;
    QBuffer tampon;
    float montant=ui->lineEditMontant->text().toFloat();

    tampon.open(QIODevice::WriteOnly);
    QDataStream out(&tampon);

    if(ui->radioButtonSolde->isChecked())       //si bouton solde checked
    {
        commande = 'S';                         //voir fiche tp Q1 et Q3
        out<<taille<<commande;

    }
    if(ui->radioButtonRetrait->isChecked())     //si bouton retrait checked
    {
        commande = 'R';                         //voir fiche tp Q1 et Q3
        out<<taille<<commande<<montant;

    }
    if(ui->radioButtonDepot->isChecked())       //si bouton depot checked
    {
        commande = 'D';                         //voir fiche tp Q1 et Q3
        out<<taille<<commande<<montant;
    }
    taille=tampon.size()-sizeof(taille);
    tampon.seek(0);
    out<<taille;
    socketClientBanque->write(tampon.buffer());
}

void DAB_MainWindow::on_pushButtonNumeroDeCompte_clicked()
{
    quint16 taille=0;
    QChar commande='N';
    int compte= ui->lineEditNumeroCompte->text().toInt();
    QBuffer tampon;

    tampon.open(QIODevice::WriteOnly);
    // association du tampon au flux de sortie
    QDataStream out(&tampon);
    // construction de la trame
    out<<taille<<commande<<compte;
    // calcul de la taille de la trame
    taille=tampon.size()-sizeof(taille);
    // placement sur la premiere position du flux pour pouvoir modifier la taille
    tampon.seek(0);
    //modification de la trame avec la taille reel de la trame
    out<<taille;
    // envoi du QByteArray du tampon via la socket
    socketClientBanque->write(tampon.buffer());
}

void DAB_MainWindow::onQTcpSocket_connected()
{
    ui->textEditEtatDeLaConnexion->append("Connected");
    ui->pushButtonConnexion->setText("Deconnexion");        //texte du bouton devient déconnexion
    ui->groupBoxOperation->setEnabled(true);                //active le groupBox des opérations
}

void DAB_MainWindow::onQTcpSocket_disconnected()
{
    ui->textEditEtatDeLaConnexion->append("Disconnected");
    ui->groupBoxOperation->setDisabled(true);               //désactive le groupBox des opérations
    ui->pushButtonConnexion->setText("Connexion");          //text du bouton devient connexion
}

void DAB_MainWindow::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->textEditEtatDeLaConnexion->setText(socketClientBanque->errorString());
}

void DAB_MainWindow::onQTcpSocket_ReadyRead()
{
    quint16 taille=0;
    QString message;
    // si le nombre d'octets recu est au moins egal a celui de la taille de ce que l'on doit recevoir
    if (socketClientBanque->bytesAvailable() >= (qint64)sizeof(taille))
    {
        // association de la socket au flux d'entree
        QDataStream in(socketClientBanque);
        // extraire la taille de ce que l'on doit recevoir
        in >> taille;
        // si le nombre d'octets recu est au moins egal a celui de ce que l'on doit recevoir
        if (socketClientBanque->bytesAvailable() >= (qint64)taille)
        {
            // extraire le message de la banque et le mettre dans message
            in>>message;
            ui->lineEditMessageBanque->setText(message);
        }
    }

}


