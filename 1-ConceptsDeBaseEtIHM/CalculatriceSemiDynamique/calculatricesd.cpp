#include "calculatricesd.h"
#include "ui_calculatricesd.h"

CalculatriceSD::CalculatriceSD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalculatriceSD)
{
    ui->setupUi(this);
}

CalculatriceSD::~CalculatriceSD()
{
    delete ui;
}
