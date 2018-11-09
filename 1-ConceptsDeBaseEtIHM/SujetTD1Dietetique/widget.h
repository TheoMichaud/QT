#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:


    void on_pushButtonSuite_2_clicked();

    void on_pushButtonDevine_clicked();

    void on_pushButtonLorentz_clicked();

    void on_pushButtonAge_clicked();

private:
    QString nom;
        QString prenom;
        static const int NB_IMC = 6;
            static const int NB_CORPULENCE = 7;
        int homme;
        int femme;
        int age;
        double poids;
        double taille;
        double imc;
        QString DeterminerClassification(double imc);

        void AfficherInfos();

        Ui::Widget *ui;

        void Devine();
        void Lorentz();
        void LorentzAge();


};

#endif // WIDGET_H
