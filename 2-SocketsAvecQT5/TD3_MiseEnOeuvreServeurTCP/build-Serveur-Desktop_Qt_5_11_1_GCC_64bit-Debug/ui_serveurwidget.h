/********************************************************************************
** Form generated from reading UI file 'serveurwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURWIDGET_H
#define UI_SERVEURWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurWidget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNumeroDePort;
    QSpinBox *spinBoxNumeroPort;
    QPushButton *pushButtonLancerServeur;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelClient;
    QTextEdit *textEditClients;
    QPushButton *ButtonQuitter;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QStringLiteral("ServeurWidget"));
        ServeurWidget->resize(398, 329);
        widget = new QWidget(ServeurWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 371, 67));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNumeroDePort = new QLabel(widget);
        labelNumeroDePort->setObjectName(QStringLiteral("labelNumeroDePort"));

        horizontalLayout->addWidget(labelNumeroDePort);

        spinBoxNumeroPort = new QSpinBox(widget);
        spinBoxNumeroPort->setObjectName(QStringLiteral("spinBoxNumeroPort"));

        horizontalLayout->addWidget(spinBoxNumeroPort);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonLancerServeur = new QPushButton(widget);
        pushButtonLancerServeur->setObjectName(QStringLiteral("pushButtonLancerServeur"));

        verticalLayout->addWidget(pushButtonLancerServeur);

        widget1 = new QWidget(ServeurWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 110, 371, 201));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelClient = new QLabel(widget1);
        labelClient->setObjectName(QStringLiteral("labelClient"));

        verticalLayout_2->addWidget(labelClient);

        textEditClients = new QTextEdit(widget1);
        textEditClients->setObjectName(QStringLiteral("textEditClients"));

        verticalLayout_2->addWidget(textEditClients);

        ButtonQuitter = new QPushButton(widget1);
        ButtonQuitter->setObjectName(QStringLiteral("ButtonQuitter"));

        verticalLayout_2->addWidget(ButtonQuitter);


        retranslateUi(ServeurWidget);

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        labelNumeroDePort->setText(QApplication::translate("ServeurWidget", "Num\303\251ro de port", nullptr));
        pushButtonLancerServeur->setText(QApplication::translate("ServeurWidget", "Lancement Serveur", nullptr));
        labelClient->setText(QApplication::translate("ServeurWidget", "Clients", nullptr));
        ButtonQuitter->setText(QApplication::translate("ServeurWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
