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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DAB_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonConnexion;
    QTextEdit *textEditEtatDeLaConnexion;
    QLabel *labelEtatDeLaConnexion;
    QGroupBox *groupBoxOperation;
    QPushButton *pushButtonEnvoi;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButtonSolde;
    QRadioButton *radioButtonRetrait;
    QRadioButton *radioButtonDepot;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButtonNumeroDeCompte;
    QLabel *labelMontant;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEditNumeroCompte;
    QLineEdit *lineEditMontant;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAdresse;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditAdresse;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPort;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditPort;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelMessageBanque;
    QLineEdit *lineEditMessageBanque;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DAB_MainWindow)
    {
        if (DAB_MainWindow->objectName().isEmpty())
            DAB_MainWindow->setObjectName(QStringLiteral("DAB_MainWindow"));
        DAB_MainWindow->setWindowModality(Qt::NonModal);
        DAB_MainWindow->resize(541, 465);
        centralWidget = new QWidget(DAB_MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonConnexion = new QPushButton(centralWidget);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(130, 110, 80, 25));
        textEditEtatDeLaConnexion = new QTextEdit(centralWidget);
        textEditEtatDeLaConnexion->setObjectName(QStringLiteral("textEditEtatDeLaConnexion"));
        textEditEtatDeLaConnexion->setGeometry(QRect(270, 40, 261, 111));
        labelEtatDeLaConnexion = new QLabel(centralWidget);
        labelEtatDeLaConnexion->setObjectName(QStringLiteral("labelEtatDeLaConnexion"));
        labelEtatDeLaConnexion->setGeometry(QRect(270, 20, 121, 17));
        groupBoxOperation = new QGroupBox(centralWidget);
        groupBoxOperation->setObjectName(QStringLiteral("groupBoxOperation"));
        groupBoxOperation->setGeometry(QRect(20, 240, 501, 181));
        pushButtonEnvoi = new QPushButton(groupBoxOperation);
        pushButtonEnvoi->setObjectName(QStringLiteral("pushButtonEnvoi"));
        pushButtonEnvoi->setGeometry(QRect(360, 140, 80, 25));
        layoutWidget = new QWidget(groupBoxOperation);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 40, 66, 83));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButtonSolde = new QRadioButton(layoutWidget);
        radioButtonSolde->setObjectName(QStringLiteral("radioButtonSolde"));

        verticalLayout_3->addWidget(radioButtonSolde);

        radioButtonRetrait = new QRadioButton(layoutWidget);
        radioButtonRetrait->setObjectName(QStringLiteral("radioButtonRetrait"));

        verticalLayout_3->addWidget(radioButtonRetrait);

        radioButtonDepot = new QRadioButton(layoutWidget);
        radioButtonDepot->setObjectName(QStringLiteral("radioButtonDepot"));

        verticalLayout_3->addWidget(radioButtonDepot);

        layoutWidget1 = new QWidget(groupBoxOperation);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 40, 238, 60));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pushButtonNumeroDeCompte = new QPushButton(layoutWidget1);
        pushButtonNumeroDeCompte->setObjectName(QStringLiteral("pushButtonNumeroDeCompte"));

        verticalLayout_5->addWidget(pushButtonNumeroDeCompte);

        labelMontant = new QLabel(layoutWidget1);
        labelMontant->setObjectName(QStringLiteral("labelMontant"));

        verticalLayout_5->addWidget(labelMontant);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lineEditNumeroCompte = new QLineEdit(layoutWidget1);
        lineEditNumeroCompte->setObjectName(QStringLiteral("lineEditNumeroCompte"));

        verticalLayout_4->addWidget(lineEditNumeroCompte);

        lineEditMontant = new QLineEdit(layoutWidget1);
        lineEditMontant->setObjectName(QStringLiteral("lineEditMontant"));

        verticalLayout_4->addWidget(lineEditMontant);


        horizontalLayout_3->addLayout(verticalLayout_4);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 20, 216, 62));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelAdresse = new QLabel(layoutWidget2);
        labelAdresse->setObjectName(QStringLiteral("labelAdresse"));

        horizontalLayout->addWidget(labelAdresse);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEditAdresse = new QLineEdit(layoutWidget2);
        lineEditAdresse->setObjectName(QStringLiteral("lineEditAdresse"));

        horizontalLayout->addWidget(lineEditAdresse);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelPort = new QLabel(layoutWidget2);
        labelPort->setObjectName(QStringLiteral("labelPort"));

        horizontalLayout_2->addWidget(labelPort);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEditPort = new QLineEdit(layoutWidget2);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        horizontalLayout_2->addWidget(lineEditPort);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 170, 501, 50));
        verticalLayout_2 = new QVBoxLayout(layoutWidget3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelMessageBanque = new QLabel(layoutWidget3);
        labelMessageBanque->setObjectName(QStringLiteral("labelMessageBanque"));

        verticalLayout_2->addWidget(labelMessageBanque);

        lineEditMessageBanque = new QLineEdit(layoutWidget3);
        lineEditMessageBanque->setObjectName(QStringLiteral("lineEditMessageBanque"));

        verticalLayout_2->addWidget(lineEditMessageBanque);

        DAB_MainWindow->setCentralWidget(centralWidget);
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
        DAB_MainWindow->setWindowTitle(QApplication::translate("DAB_MainWindow", "Distributeur Automatique de Billets", nullptr));
        pushButtonConnexion->setText(QApplication::translate("DAB_MainWindow", "Connexion", nullptr));
        labelEtatDeLaConnexion->setText(QApplication::translate("DAB_MainWindow", "Etat de la connexion", nullptr));
        groupBoxOperation->setTitle(QApplication::translate("DAB_MainWindow", "Op\303\251rations envoy\303\251es \303\240 la banque", nullptr));
        pushButtonEnvoi->setText(QApplication::translate("DAB_MainWindow", "Envoi", nullptr));
        radioButtonSolde->setText(QApplication::translate("DAB_MainWindow", "Solde", nullptr));
        radioButtonRetrait->setText(QApplication::translate("DAB_MainWindow", "Retrait", nullptr));
        radioButtonDepot->setText(QApplication::translate("DAB_MainWindow", "D\303\251pot", nullptr));
        pushButtonNumeroDeCompte->setText(QApplication::translate("DAB_MainWindow", "Num\303\251ro de compte", nullptr));
        labelMontant->setText(QApplication::translate("DAB_MainWindow", "Montant :", nullptr));
        labelAdresse->setText(QApplication::translate("DAB_MainWindow", "Adresse :", nullptr));
        labelPort->setText(QApplication::translate("DAB_MainWindow", "Port :", nullptr));
        labelMessageBanque->setText(QApplication::translate("DAB_MainWindow", "Message de la banque : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAB_MainWindow: public Ui_DAB_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_MAINWINDOW_H
