#include "serveurwidget.h"
#include "ui_serveurwidget.h"
#include "QHostInfo"

ServeurWidget::ServeurWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
    socketEcouteServeur = new QTcpServer;
    process = new QProcess;
    connect(process, &QProcess::readyReadStandardOutput, this, &ServeurWidget::onQProcess_readyReadStandardOutput);
    connect(socketEcouteServeur, &QTcpServer::newConnection, this, &ServeurWidget::onQTcpServer_newConnection);
}


ServeurWidget::~ServeurWidget()
{
    delete ui;
}

void ServeurWidget::onQTcpServer_newConnection()
{
    socketDialogueClient = socketEcouteServeur->nextPendingConnection();
    connect(socketDialogueClient, &QTcpSocket::readyRead, this, &ServeurWidget::onQTcpSocket_readyRead);
    ui->textEditClients->append("Client address : " + socketDialogueClient->peerAddress().toString());

}

void ServeurWidget::onQTcpSocket_readyRead()
{
    QByteArray data;
    data = socketDialogueClient->readAll();
    ui->textEditClients->append(data);

    if(!strcmp(data, "u")) //Nom de l'utilisateur connecté
    {
        QString user = getenv("USERNAME");
        socketDialogueClient->write(user.toLatin1());
    }
    if(!strcmp(data, "c")) //Nom de la machine
    {
        QString user = QHostInfo::localHostName();
        socketDialogueClient->write(user.toLatin1());
    }
    if(!strcmp(data, "o")) //Type d'OS
    {
        process->start("uname", QStringList("-p"));
    }
    if(!strcmp(data, "a")) //Type de process
    {
        process->start("uname");
    }
}
