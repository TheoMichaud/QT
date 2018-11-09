/********************************************************************************
** Form generated from reading UI file 'dab_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAB_MAINWINDOW_H
#define UI_DAB_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DAB_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *labelAdresse;
    QLabel *labelPort;
    QLineEdit *lineEditAdresse;
    QLineEdit *lineEditPort;
    QLabel *labelEtat;
    QTextEdit *textEditEtat;
    QPushButton *pushButtonConnexion;
    QGroupBox *groupBoxMessage;
    QPushButton *pushButtonNumeroCompte;
    QLineEdit *lineEditNumeroCompte;
    QLabel *label;
    QLineEdit *lineEditMontant;
    QRadioButton *radioButtonSolde;
    QRadioButton *radioButtonRetrait;
    QRadioButton *radioButtonDepot;
    QPushButton *pushButtonEnvoi;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DAB_MainWindow)
    {
        if (DAB_MainWindow->objectName().isEmpty())
            DAB_MainWindow->setObjectName(QStringLiteral("DAB_MainWindow"));
        DAB_MainWindow->resize(528, 354);
        centralWidget = new QWidget(DAB_MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labelAdresse = new QLabel(centralWidget);
        labelAdresse->setObjectName(QStringLiteral("labelAdresse"));
        labelAdresse->setGeometry(QRect(20, 10, 54, 17));
        labelPort = new QLabel(centralWidget);
        labelPort->setObjectName(QStringLiteral("labelPort"));
        labelPort->setGeometry(QRect(20, 40, 54, 17));
        lineEditAdresse = new QLineEdit(centralWidget);
        lineEditAdresse->setObjectName(QStringLiteral("lineEditAdresse"));
        lineEditAdresse->setGeometry(QRect(80, 10, 141, 25));
        lineEditPort = new QLineEdit(centralWidget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setGeometry(QRect(80, 40, 141, 25));
        labelEtat = new QLabel(centralWidget);
        labelEtat->setObjectName(QStringLiteral("labelEtat"));
        labelEtat->setGeometry(QRect(280, 10, 121, 17));
        textEditEtat = new QTextEdit(centralWidget);
        textEditEtat->setObjectName(QStringLiteral("textEditEtat"));
        textEditEtat->setGeometry(QRect(280, 30, 221, 91));
        pushButtonConnexion = new QPushButton(centralWidget);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(80, 90, 101, 21));
        groupBoxMessage = new QGroupBox(centralWidget);
        groupBoxMessage->setObjectName(QStringLiteral("groupBoxMessage"));
        groupBoxMessage->setGeometry(QRect(10, 140, 491, 141));
        pushButtonNumeroCompte = new QPushButton(groupBoxMessage);
        pushButtonNumeroCompte->setObjectName(QStringLiteral("pushButtonNumeroCompte"));
        pushButtonNumeroCompte->setGeometry(QRect(30, 30, 121, 25));
        lineEditNumeroCompte = new QLineEdit(groupBoxMessage);
        lineEditNumeroCompte->setObjectName(QStringLiteral("lineEditNumeroCompte"));
        lineEditNumeroCompte->setGeometry(QRect(160, 30, 151, 25));
        label = new QLabel(groupBoxMessage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 70, 54, 17));
        lineEditMontant = new QLineEdit(groupBoxMessage);
        lineEditMontant->setObjectName(QStringLiteral("lineEditMontant"));
        lineEditMontant->setGeometry(QRect(160, 60, 151, 25));
        radioButtonSolde = new QRadioButton(groupBoxMessage);
        radioButtonSolde->setObjectName(QStringLiteral("radioButtonSolde"));
        radioButtonSolde->setGeometry(QRect(380, 30, 96, 23));
        radioButtonRetrait = new QRadioButton(groupBoxMessage);
        radioButtonRetrait->setObjectName(QStringLiteral("radioButtonRetrait"));
        radioButtonRetrait->setGeometry(QRect(380, 50, 96, 23));
        radioButtonDepot = new QRadioButton(groupBoxMessage);
        radioButtonDepot->setObjectName(QStringLiteral("radioButtonDepot"));
        radioButtonDepot->setGeometry(QRect(380, 70, 96, 23));
        pushButtonEnvoi = new QPushButton(groupBoxMessage);
        pushButtonEnvoi->setObjectName(QStringLiteral("pushButtonEnvoi"));
        pushButtonEnvoi->setGeometry(QRect(380, 110, 80, 25));
        DAB_MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DAB_MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 528, 22));
        DAB_MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DAB_MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DAB_MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DAB_MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DAB_MainWindow->setStatusBar(statusBar);

        retranslateUi(DAB_MainWindow);

        QMetaObject::connectSlotsByName(DAB_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DAB_MainWindow)
    {
        DAB_MainWindow->setWindowTitle(QApplication::translate("DAB_MainWindow", "DAB_MainWindow", nullptr));
        labelAdresse->setText(QApplication::translate("DAB_MainWindow", "Adresse : ", nullptr));
        labelPort->setText(QApplication::translate("DAB_MainWindow", "Port : ", nullptr));
        labelEtat->setText(QApplication::translate("DAB_MainWindow", "Etat de la connexion", nullptr));
        pushButtonConnexion->setText(QApplication::translate("DAB_MainWindow", "Connexion", nullptr));
        groupBoxMessage->setTitle(QApplication::translate("DAB_MainWindow", "Message De La Banque : ", nullptr));
        pushButtonNumeroCompte->setText(QApplication::translate("DAB_MainWindow", "Num\303\251ro du compte", nullptr));
        label->setText(QApplication::translate("DAB_MainWindow", "Montant : ", nullptr));
        radioButtonSolde->setText(QApplication::translate("DAB_MainWindow", "Solde", nullptr));
        radioButtonRetrait->setText(QApplication::translate("DAB_MainWindow", "Retrait", nullptr));
        radioButtonDepot->setText(QApplication::translate("DAB_MainWindow", "D\303\251pot", nullptr));
        pushButtonEnvoi->setText(QApplication::translate("DAB_MainWindow", "Envoi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAB_MainWindow: public Ui_DAB_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_MAINWINDOW_H
