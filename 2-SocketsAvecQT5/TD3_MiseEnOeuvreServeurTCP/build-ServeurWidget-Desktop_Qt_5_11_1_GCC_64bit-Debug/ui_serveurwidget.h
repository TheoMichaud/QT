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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNumeroPort;
    QSpinBox *spinBoxNumeroPort;
    QPushButton *pushButtonLancerServeur;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelClient;
    QTextEdit *textEditClients;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QStringLiteral("ServeurWidget"));
        ServeurWidget->resize(400, 300);
        ServeurWidget->setMinimumSize(QSize(400, 300));
        ServeurWidget->setMaximumSize(QSize(400, 300));
        layoutWidget = new QWidget(ServeurWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 281));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNumeroPort = new QLabel(layoutWidget);
        labelNumeroPort->setObjectName(QStringLiteral("labelNumeroPort"));

        horizontalLayout->addWidget(labelNumeroPort);

        spinBoxNumeroPort = new QSpinBox(layoutWidget);
        spinBoxNumeroPort->setObjectName(QStringLiteral("spinBoxNumeroPort"));
        spinBoxNumeroPort->setMaximum(99999);

        horizontalLayout->addWidget(spinBoxNumeroPort);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonLancerServeur = new QPushButton(layoutWidget);
        pushButtonLancerServeur->setObjectName(QStringLiteral("pushButtonLancerServeur"));

        verticalLayout->addWidget(pushButtonLancerServeur);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelClient = new QLabel(layoutWidget);
        labelClient->setObjectName(QStringLiteral("labelClient"));

        verticalLayout_2->addWidget(labelClient);

        textEditClients = new QTextEdit(layoutWidget);
        textEditClients->setObjectName(QStringLiteral("textEditClients"));

        verticalLayout_2->addWidget(textEditClients);

        pushButtonQuitter = new QPushButton(layoutWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        verticalLayout_2->addWidget(pushButtonQuitter);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(ServeurWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ServeurWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        labelNumeroPort->setText(QApplication::translate("ServeurWidget", "Num\303\251ro de port", nullptr));
        pushButtonLancerServeur->setText(QApplication::translate("ServeurWidget", "Lancement serveur", nullptr));
        labelClient->setText(QApplication::translate("ServeurWidget", "Clients", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ServeurWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
