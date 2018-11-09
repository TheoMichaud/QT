#ifndef CALCULATRICESD_H
#define CALCULATRICESD_H

#include <QWidget>

namespace Ui {
class CalculatriceSD;
}

class CalculatriceSD : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatriceSD(QWidget *parent = nullptr);
    ~CalculatriceSD();

private:
    Ui::CalculatriceSD *ui;
};

#endif // CALCULATRICESD_H
