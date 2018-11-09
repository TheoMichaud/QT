/********************************************************************************
** Form generated from reading UI file 'calculatricesd.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICESD_H
#define UI_CALCULATRICESD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatriceSD
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditAfficheur;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButtonPlus;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButtonMoins;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButtonMultiplier;
    QPushButton *pushButtonClear;
    QPushButton *pushButton0;
    QPushButton *pushButtonEgal;
    QPushButton *pushButtonDiviser;

    void setupUi(QWidget *CalculatriceSD)
    {
        if (CalculatriceSD->objectName().isEmpty())
            CalculatriceSD->setObjectName(QStringLiteral("CalculatriceSD"));
        CalculatriceSD->resize(404, 389);
        widget = new QWidget(CalculatriceSD);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 401, 381));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditAfficheur = new QLineEdit(widget);
        lineEditAfficheur->setObjectName(QStringLiteral("lineEditAfficheur"));

        gridLayout->addWidget(lineEditAfficheur, 0, 0, 1, 4);

        pushButton7 = new QPushButton(widget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));

        gridLayout->addWidget(pushButton7, 1, 0, 1, 1);

        pushButton8 = new QPushButton(widget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));

        gridLayout->addWidget(pushButton8, 1, 1, 1, 1);

        pushButton9 = new QPushButton(widget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));

        gridLayout->addWidget(pushButton9, 1, 2, 1, 1);

        pushButtonPlus = new QPushButton(widget);
        pushButtonPlus->setObjectName(QStringLiteral("pushButtonPlus"));

        gridLayout->addWidget(pushButtonPlus, 1, 3, 1, 1);

        pushButton4 = new QPushButton(widget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));

        gridLayout->addWidget(pushButton4, 2, 0, 1, 1);

        pushButton5 = new QPushButton(widget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));

        gridLayout->addWidget(pushButton5, 2, 1, 1, 1);

        pushButton6 = new QPushButton(widget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));

        gridLayout->addWidget(pushButton6, 2, 2, 1, 1);

        pushButtonMoins = new QPushButton(widget);
        pushButtonMoins->setObjectName(QStringLiteral("pushButtonMoins"));

        gridLayout->addWidget(pushButtonMoins, 2, 3, 1, 1);

        pushButton1 = new QPushButton(widget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));

        gridLayout->addWidget(pushButton1, 3, 0, 1, 1);

        pushButton2 = new QPushButton(widget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));

        gridLayout->addWidget(pushButton2, 3, 1, 1, 1);

        pushButton3 = new QPushButton(widget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));

        gridLayout->addWidget(pushButton3, 3, 2, 1, 1);

        pushButtonMultiplier = new QPushButton(widget);
        pushButtonMultiplier->setObjectName(QStringLiteral("pushButtonMultiplier"));

        gridLayout->addWidget(pushButtonMultiplier, 3, 3, 1, 1);

        pushButtonClear = new QPushButton(widget);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));

        gridLayout->addWidget(pushButtonClear, 4, 0, 1, 1);

        pushButton0 = new QPushButton(widget);
        pushButton0->setObjectName(QStringLiteral("pushButton0"));

        gridLayout->addWidget(pushButton0, 4, 1, 1, 1);

        pushButtonEgal = new QPushButton(widget);
        pushButtonEgal->setObjectName(QStringLiteral("pushButtonEgal"));

        gridLayout->addWidget(pushButtonEgal, 4, 2, 1, 1);

        pushButtonDiviser = new QPushButton(widget);
        pushButtonDiviser->setObjectName(QStringLiteral("pushButtonDiviser"));

        gridLayout->addWidget(pushButtonDiviser, 4, 3, 1, 1);


        retranslateUi(CalculatriceSD);

        QMetaObject::connectSlotsByName(CalculatriceSD);
    } // setupUi

    void retranslateUi(QWidget *CalculatriceSD)
    {
        CalculatriceSD->setWindowTitle(QApplication::translate("CalculatriceSD", "CalculatriceSD", nullptr));
        pushButton7->setText(QApplication::translate("CalculatriceSD", "7", nullptr));
        pushButton8->setText(QApplication::translate("CalculatriceSD", "8", nullptr));
        pushButton9->setText(QApplication::translate("CalculatriceSD", "9", nullptr));
        pushButtonPlus->setText(QApplication::translate("CalculatriceSD", "+", nullptr));
        pushButton4->setText(QApplication::translate("CalculatriceSD", "4", nullptr));
        pushButton5->setText(QApplication::translate("CalculatriceSD", "5", nullptr));
        pushButton6->setText(QApplication::translate("CalculatriceSD", "6", nullptr));
        pushButtonMoins->setText(QApplication::translate("CalculatriceSD", "-", nullptr));
        pushButton1->setText(QApplication::translate("CalculatriceSD", "1", nullptr));
        pushButton2->setText(QApplication::translate("CalculatriceSD", "2", nullptr));
        pushButton3->setText(QApplication::translate("CalculatriceSD", "3", nullptr));
        pushButtonMultiplier->setText(QApplication::translate("CalculatriceSD", "*", nullptr));
        pushButtonClear->setText(QApplication::translate("CalculatriceSD", "C", nullptr));
        pushButton0->setText(QApplication::translate("CalculatriceSD", "0", nullptr));
        pushButtonEgal->setText(QApplication::translate("CalculatriceSD", "=", nullptr));
        pushButtonDiviser->setText(QApplication::translate("CalculatriceSD", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatriceSD: public Ui_CalculatriceSD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICESD_H
