#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::AfficherInfos(){

    /*//Message de bienvenue
    QString bonjour = "Bonjour " + prenom + " " + nom + "\n";

    //IMC
    QString indice = "Votre indice de masse corporelle est de : " + QString::number(imc) + "\n\n";

    //Corpulence
    QString corpu;
    int indiceCorpulence = 0;
    for (int i = 0; i < NBIMC - 1; i++) {
        if (imc > imcs[i] && imc <= imcs[i + 1]) {
            indiceCorpulence = i + 1;
        }
    }
    // cas extreme
    if (imc < 16.5) {
        indiceCorpulence = 0;
    }
    if (imc > 40) {
       indiceCorpulence = NBCORPULENCE - 1;
    }
    corpu = "Votre corpulence est qualifiée de " + corpulences[indiceCorpulence] + "\n";

    QString texte = bonjour + indice + corpu;
    ui->textEditAfficheur_2->append(texte);*/

    // Initialisation de poids, taille, âge, nom et prénom
        nom = ui->lineEditNom_2->text();
        prenom = ui->lineEditPrenom_2->text();
        age = ui->spinBoxAge_2->value();
        poids = ui->doubleSpinBoxPoids_2->value();
        taille = ui->doubleSpinBoxTaille_2->value();

        double imc = poids/(taille * taille);

        // affichage du message de bienvenue
        ui->textEditAfficheur_2->setText("Bienvenue : <b>"+prenom+ " "+nom+"</b>");
        ui->textEditAfficheur_2->append("Votre indice de masse corporelle est : <b>" + QString::number(imc, 'f', 1) + "</b>");
        ui->textEditAfficheur_2->append("\nVotre Corpulence est qualifié de : <b>" + DeterminerClassification(imc) + "</b>");

}

void Widget::on_pushButtonSuite_2_clicked()
{
        /*this->nom = ui->lineEditNom_2->text();
        this->prenom = ui->lineEditPrenom_2->text();
        this->femme = ui->radioButtonFemme_2->isChecked();
        this->homme = ui->radioButtonHomme_2->isChecked();
        this->age = ui->spinBoxAge_2->value();
        this->poids = ui->doubleSpinBoxPoids_2->value();
        this->taille = ui->doubleSpinBoxTaille_2->value();

        this->imc = this->poids / (this->taille*this->taille);

        ui->tabWidget->setCurrentIndex(1);
        AfficherInfos();*/

    ui->tabWidget->setCurrentIndex(1);
    ui->tabWidget->widget(1)->setVisible(true);
    AfficherInfos();
}


QString Widget::DeterminerClassification(double imc)
{
    double imcs[NB_IMC] = {16.5, 18.5, 25, 30, 35, 40};
    QString corpulences[NB_CORPULENCE] = {"Famine",
                                          "Maigreur",
                                          "Normale",
                                          "Surpoids",
                                          "Obésité modérée",
                                          "Obésité sévère",
                                          "Obésité morbide"};
    int indiceCorpulence = 0;

    for (int i = 0; i < NB_IMC - 1; i++) {
        if (imc > imcs[i] && imc <= imcs[i + 1]) {
            indiceCorpulence = i + 1;
        }
    }
    // les cas extremes
    if (imc < imcs[0]) {
        indiceCorpulence = 0;
    }
    if (imc > imcs[NB_IMC-1]) {
       indiceCorpulence = NB_CORPULENCE - 1;
    }
    return corpulences[indiceCorpulence];

}

void Widget::Devine()
{
    double poidsIdeal = 0;

    if (ui->radioButtonFemme_2->isChecked()) {
        poidsIdeal = 45.5 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (ui->radioButtonHomme_2->isChecked()) {
        poidsIdeal = 50.0 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (poidsIdeal > 0) {
        ui->textEditAfficheur_2->append("\nVotre poids idéal avec la formule de Devine est : <b>" + QString::number(poidsIdeal, 'f', 1) + " kg </b>");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEditAfficheur_2->append("Vous devez perdre : <b>"+QString::number(ecart, 'f', 1)+" kg</b>\n");
        }
        else {
          ui->textEditAfficheur_2->append("Vous devez prendre : <b>"+QString::number(-ecart, 'f', 1)+" kg</b>\n");
        }
    }

}

void Widget::on_pushButtonDevine_clicked()
{
    Devine();
}


void Widget::Lorentz()
{
    double poidsIdeal = 0;

    if (ui->radioButtonFemme_2->isChecked()) {
        poidsIdeal = taille * 100.0 - 100.0 -(taille*100-150)/2.5;
    }
    if (ui->radioButtonHomme_2->isChecked()) {
        poidsIdeal = taille * 100.0 - 100.0 -(taille*100-150)/4;
    }
    if (poidsIdeal > 0) {
        ui->textEditAfficheur_2->append("\nVotre poids idéal avec la formule de Lorentz est : <b>" + QString::number(poidsIdeal, 'f', 1) + " kg</b>");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEditAfficheur_2->append("Vous devez perdre : <b>"+QString::number(ecart, 'f', 1)+" kg</b>\n");
        }
        else {
          ui->textEditAfficheur_2->append("Vous devez prendre : <b>"+QString::number(-ecart, 'f', 1)+" kg</b>\n");
        }
    }
}



void Widget::on_pushButtonLorentz_clicked()
{
    Lorentz();
}


void Widget::LorentzAge()
{
    double poidsIdeal = 0;

    poidsIdeal = 50.0 + (taille*100 - 150)/4 + (age - 20)/4;
    if (poidsIdeal > 0) {
        ui->textEditAfficheur_2->append("\nVotre poids idéal avec la formule de Lorentz tenant compte de l'âge : <b>" + QString::number(poidsIdeal, 'f', 1) + " kg</b>");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEditAfficheur_2->append("Vous devez perdre : <b>"+QString::number(ecart, 'f', 1)+" kg</b>\n");
        }
        else {
          ui->textEditAfficheur_2->append("Vous devez prendre : <b>"+QString::number(-ecart, 'f', 1)+" kg</b>\n");
        }
    }
}




void Widget::on_pushButtonAge_clicked()
{
    LorentzAge();
}



