#include "dab_mainwindow.h"
#include "ui_dab_mainwindow.h"

DAB_MainWindow::DAB_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DAB_MainWindow)
{
    ui->setupUi(this);
    socketClientBanque = new QTcpSocket;
    connect(socketClientBanque, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &DAB_MainWindow::onQTcpSocket_error);
    connect( socketClientBanque, &QTcpSocket::connected,    this, &DAB_MainWindow::onQTcpSocket_connected);
    connect( socketClientBanque, &QTcpSocket::disconnected, this, &DAB_MainWindow::onQTcpSocket_disconnected);
    connect( socketClientBanque, &QTcpSocket::readyRead, this, &DAB_MainWindow::onQTcpSocket_readyRead);
}

DAB_MainWindow::~DAB_MainWindow()
{
    delete ui;
}

void DAB_MainWindow::on_pushButtonConnexion_clicked()
{
    QString hostname = ui->lineEditAdresse->text();
        QString port = ui->lineEditPort->text();
        int portint = port.toInt();
        if(ui->pushButtonConnexion->text() == "Connexion")
        {
            socketClientBanque->connectToHost(hostname, portint);
        }
        else
        {
            socketClientBanque->disconnectFromHost();
        }
}

void DAB_MainWindow::onQTcpSocket_connected()
{
    ui->lineEditPort->setEnabled(0);
    ui->lineEditAdresse->setEnabled(0);
    ui->textEditEtat->append("connected");
    ui->pushButtonConnexion->setText("Deconnexion");
    ui->groupBoxBanque->setEnabled(1);
}
void DAB_MainWindow::onQTcpSocket_disconnected()
{
    ui->lineEditPort->setEnabled(1);
    ui->lineEditAdresse->setEnabled(1);
    ui->textEditEtat->append("disconnected");
    ui->pushButtonConnexion->setText("Connexion");
    ui->groupBoxBanque->setEnabled(0);
}



void DAB_MainWindow::on_pushButtonNumeroCompte_clicked()
{

}

void DAB_MainWindow::on_pushButtonEnvoi_clicked()
{

}
