/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelNom_2;
    QLineEdit *lineEditNom_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelPrenom_2;
    QLineEdit *lineEditPrenom_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelSexe_2;
    QRadioButton *radioButtonFemme_2;
    QRadioButton *radioButtonHomme_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelAge_2;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *spinBoxAge_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_7;
    QDoubleSpinBox *doubleSpinBoxPoids_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_8;
    QDoubleSpinBox *doubleSpinBoxTaille_2;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButtonSuite_2;
    QSpacerItem *horizontalSpacer_10;
    QWidget *tab_4;
    QTextEdit *textEditAfficheur_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonDevine;
    QPushButton *pushButtonLorentz;
    QPushButton *pushButtonAge;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(466, 545);
        Widget->setMinimumSize(QSize(466, 545));
        Widget->setMaximumSize(QSize(466, 545));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 20, 441, 391));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        layoutWidget_2 = new QWidget(tab_3);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(120, 50, 201, 228));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        labelNom_2 = new QLabel(layoutWidget_2);
        labelNom_2->setObjectName(QStringLiteral("labelNom_2"));

        horizontalLayout_8->addWidget(labelNom_2);

        lineEditNom_2 = new QLineEdit(layoutWidget_2);
        lineEditNom_2->setObjectName(QStringLiteral("lineEditNom_2"));

        horizontalLayout_8->addWidget(lineEditNom_2);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        labelPrenom_2 = new QLabel(layoutWidget_2);
        labelPrenom_2->setObjectName(QStringLiteral("labelPrenom_2"));

        horizontalLayout_9->addWidget(labelPrenom_2);

        lineEditPrenom_2 = new QLineEdit(layoutWidget_2);
        lineEditPrenom_2->setObjectName(QStringLiteral("lineEditPrenom_2"));

        horizontalLayout_9->addWidget(lineEditPrenom_2);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        labelSexe_2 = new QLabel(layoutWidget_2);
        labelSexe_2->setObjectName(QStringLiteral("labelSexe_2"));

        horizontalLayout_10->addWidget(labelSexe_2);

        radioButtonFemme_2 = new QRadioButton(layoutWidget_2);
        radioButtonFemme_2->setObjectName(QStringLiteral("radioButtonFemme_2"));

        horizontalLayout_10->addWidget(radioButtonFemme_2);

        radioButtonHomme_2 = new QRadioButton(layoutWidget_2);
        radioButtonHomme_2->setObjectName(QStringLiteral("radioButtonHomme_2"));

        horizontalLayout_10->addWidget(radioButtonHomme_2);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        labelAge_2 = new QLabel(layoutWidget_2);
        labelAge_2->setObjectName(QStringLiteral("labelAge_2"));

        horizontalLayout_11->addWidget(labelAge_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_6);

        spinBoxAge_2 = new QSpinBox(layoutWidget_2);
        spinBoxAge_2->setObjectName(QStringLiteral("spinBoxAge_2"));
        spinBoxAge_2->setMinimum(1);
        spinBoxAge_2->setMaximum(200);

        horizontalLayout_11->addWidget(spinBoxAge_2);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_12->addWidget(label_3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);

        doubleSpinBoxPoids_2 = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBoxPoids_2->setObjectName(QStringLiteral("doubleSpinBoxPoids_2"));
        doubleSpinBoxPoids_2->setMinimum(15);
        doubleSpinBoxPoids_2->setMaximum(300);
        doubleSpinBoxPoids_2->setSingleStep(0.1);

        horizontalLayout_12->addWidget(doubleSpinBoxPoids_2);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_13->addWidget(label_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);

        doubleSpinBoxTaille_2 = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBoxTaille_2->setObjectName(QStringLiteral("doubleSpinBoxTaille_2"));
        doubleSpinBoxTaille_2->setMinimum(0.5);
        doubleSpinBoxTaille_2->setMaximum(3);
        doubleSpinBoxTaille_2->setSingleStep(0.01);

        horizontalLayout_13->addWidget(doubleSpinBoxTaille_2);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_9);

        pushButtonSuite_2 = new QPushButton(layoutWidget_2);
        pushButtonSuite_2->setObjectName(QStringLiteral("pushButtonSuite_2"));

        horizontalLayout_14->addWidget(pushButtonSuite_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_14);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_4->setEnabled(true);
        textEditAfficheur_2 = new QTextEdit(tab_4);
        textEditAfficheur_2->setObjectName(QStringLiteral("textEditAfficheur_2"));
        textEditAfficheur_2->setGeometry(QRect(10, 10, 411, 191));
        textEditAfficheur_2->setReadOnly(true);
        widget = new QWidget(tab_4);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(5, 220, 421, 111));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonDevine = new QPushButton(widget);
        pushButtonDevine->setObjectName(QStringLiteral("pushButtonDevine"));

        verticalLayout->addWidget(pushButtonDevine);

        pushButtonLorentz = new QPushButton(widget);
        pushButtonLorentz->setObjectName(QStringLiteral("pushButtonLorentz"));

        verticalLayout->addWidget(pushButtonLorentz);

        pushButtonAge = new QPushButton(widget);
        pushButtonAge->setObjectName(QStringLiteral("pushButtonAge"));

        verticalLayout->addWidget(pushButtonAge);

        tabWidget->addTab(tab_4, QString());
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(200, 450, 71, 25));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        labelNom_2->setText(QApplication::translate("Widget", "Nom", nullptr));
        labelPrenom_2->setText(QApplication::translate("Widget", "Prenom", nullptr));
        labelSexe_2->setText(QApplication::translate("Widget", "Sexe", nullptr));
        radioButtonFemme_2->setText(QApplication::translate("Widget", "Femme", nullptr));
        radioButtonHomme_2->setText(QApplication::translate("Widget", "Homme", nullptr));
        labelAge_2->setText(QApplication::translate("Widget", "Age", nullptr));
        label_3->setText(QApplication::translate("Widget", "Poids (m)", nullptr));
        label_4->setText(QApplication::translate("Widget", "Taille (m)", nullptr));
        pushButtonSuite_2->setText(QApplication::translate("Widget", "Suite", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Widget", "Informations personnelles", nullptr));
        pushButtonDevine->setText(QApplication::translate("Widget", "Poids id\303\251al formule de Devine", nullptr));
        pushButtonLorentz->setText(QApplication::translate("Widget", "Poids id\303\251al formule de Lorentz", nullptr));
        pushButtonAge->setText(QApplication::translate("Widget", "Poids id\303\251al formule de Lorentz en fonction de l'\303\242ge", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Widget", "Calcul du poids id\303\251al", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
