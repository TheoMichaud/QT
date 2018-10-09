#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonLinux_clicked()
{
    ui->textEditEvenement->append("Linux");
}

void MainWindow::on_pushButtonWindows_clicked()
{
    ui->textEditEvenement->append("Windows");
}

void MainWindow::on_pushButtonOS_clicked()
{
    ui->textEditEvenement->append("OS X Lion");
}

void MainWindow::on_lineEditCode_textChanged(const QString &arg1)
{
    ui->textEditEvenement->append(ui->lineEditCode->text());
}

void MainWindow::on_actionJAVA_triggered()
{
     ui->textEditEvenement->append("JAVA");
     statusBar()->showMessage("Langage JAVA");
}
