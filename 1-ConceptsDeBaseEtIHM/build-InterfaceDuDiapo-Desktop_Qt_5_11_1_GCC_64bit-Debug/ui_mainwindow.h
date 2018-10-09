/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionJAVA;
    QAction *actionC;
    QAction *actionC_2;
    QAction *actionPython;
    QWidget *centralWidget;
    QPushButton *pushButtonQuitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelEntrezCode;
    QLineEdit *lineEditCode;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelChoix;
    QComboBox *comboBoxChoix;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxLinux;
    QCheckBox *checkBoxWindows;
    QCheckBox *checkBoxOS;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonLinux;
    QRadioButton *radioButtonWindows;
    QRadioButton *radioButtonOS;
    QWidget *widget4;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTextEdit *textEditEvenement;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonLinux;
    QPushButton *pushButtonWindows;
    QPushButton *pushButtonOS;
    QMenuBar *menuBar;
    QMenu *menulangages;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(465, 565);
        actionJAVA = new QAction(MainWindow);
        actionJAVA->setObjectName(QStringLiteral("actionJAVA"));
        actionC = new QAction(MainWindow);
        actionC->setObjectName(QStringLiteral("actionC"));
        actionC_2 = new QAction(MainWindow);
        actionC_2->setObjectName(QStringLiteral("actionC_2"));
        actionPython = new QAction(MainWindow);
        actionPython->setObjectName(QStringLiteral("actionPython"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonQuitter = new QPushButton(centralWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(300, 320, 80, 25));
        pushButtonQuitter->setStyleSheet(QStringLiteral("background-color: rgb(239, 41, 41);"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 40, 261, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelEntrezCode = new QLabel(widget);
        labelEntrezCode->setObjectName(QStringLiteral("labelEntrezCode"));

        horizontalLayout->addWidget(labelEntrezCode);

        lineEditCode = new QLineEdit(widget);
        lineEditCode->setObjectName(QStringLiteral("lineEditCode"));
        lineEditCode->setStyleSheet(QStringLiteral("background-color: rgb(114, 159, 207);"));

        horizontalLayout->addWidget(lineEditCode);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(130, 100, 201, 27));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelChoix = new QLabel(widget1);
        labelChoix->setObjectName(QStringLiteral("labelChoix"));

        horizontalLayout_2->addWidget(labelChoix);

        comboBoxChoix = new QComboBox(widget1);
        comboBoxChoix->addItem(QString());
        comboBoxChoix->addItem(QString());
        comboBoxChoix->addItem(QString());
        comboBoxChoix->setObjectName(QStringLiteral("comboBoxChoix"));

        horizontalLayout_2->addWidget(comboBoxChoix);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(70, 170, 311, 25));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBoxLinux = new QCheckBox(widget2);
        checkBoxLinux->setObjectName(QStringLiteral("checkBoxLinux"));

        horizontalLayout_3->addWidget(checkBoxLinux);

        checkBoxWindows = new QCheckBox(widget2);
        checkBoxWindows->setObjectName(QStringLiteral("checkBoxWindows"));

        horizontalLayout_3->addWidget(checkBoxWindows);

        checkBoxOS = new QCheckBox(widget2);
        checkBoxOS->setObjectName(QStringLiteral("checkBoxOS"));

        horizontalLayout_3->addWidget(checkBoxOS);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(70, 220, 311, 25));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioButtonLinux = new QRadioButton(widget3);
        radioButtonLinux->setObjectName(QStringLiteral("radioButtonLinux"));

        horizontalLayout_4->addWidget(radioButtonLinux);

        radioButtonWindows = new QRadioButton(widget3);
        radioButtonWindows->setObjectName(QStringLiteral("radioButtonWindows"));

        horizontalLayout_4->addWidget(radioButtonWindows);

        radioButtonOS = new QRadioButton(widget3);
        radioButtonOS->setObjectName(QStringLiteral("radioButtonOS"));

        horizontalLayout_4->addWidget(radioButtonOS);

        widget4 = new QWidget(centralWidget);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(50, 370, 351, 111));
        verticalLayout = new QVBoxLayout(widget4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget4);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        textEditEvenement = new QTextEdit(widget4);
        textEditEvenement->setObjectName(QStringLiteral("textEditEvenement"));
        textEditEvenement->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));

        verticalLayout->addWidget(textEditEvenement);

        widget5 = new QWidget(centralWidget);
        widget5->setObjectName(QStringLiteral("widget5"));
        widget5->setGeometry(QRect(70, 270, 311, 27));
        horizontalLayout_5 = new QHBoxLayout(widget5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButtonLinux = new QPushButton(widget5);
        pushButtonLinux->setObjectName(QStringLiteral("pushButtonLinux"));

        horizontalLayout_5->addWidget(pushButtonLinux);

        pushButtonWindows = new QPushButton(widget5);
        pushButtonWindows->setObjectName(QStringLiteral("pushButtonWindows"));

        horizontalLayout_5->addWidget(pushButtonWindows);

        pushButtonOS = new QPushButton(widget5);
        pushButtonOS->setObjectName(QStringLiteral("pushButtonOS"));

        horizontalLayout_5->addWidget(pushButtonOS);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 465, 22));
        menulangages = new QMenu(menuBar);
        menulangages->setObjectName(QStringLiteral("menulangages"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menulangages->menuAction());
        menulangages->addAction(actionJAVA);
        menulangages->addAction(actionC);
        menulangages->addAction(actionC_2);
        menulangages->addSeparator();
        menulangages->addAction(actionPython);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionJAVA->setText(QApplication::translate("MainWindow", "JAVA", nullptr));
        actionC->setText(QApplication::translate("MainWindow", "C", nullptr));
        actionC_2->setText(QApplication::translate("MainWindow", "C++", nullptr));
        actionPython->setText(QApplication::translate("MainWindow", "Python", nullptr));
        pushButtonQuitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        labelEntrezCode->setText(QApplication::translate("MainWindow", "Entrez votre code :", nullptr));
        labelChoix->setText(QApplication::translate("MainWindow", "Choix :", nullptr));
        comboBoxChoix->setItemText(0, QApplication::translate("MainWindow", "Linux", nullptr));
        comboBoxChoix->setItemText(1, QApplication::translate("MainWindow", "Windows", nullptr));
        comboBoxChoix->setItemText(2, QApplication::translate("MainWindow", "OS X Lion", nullptr));

        checkBoxLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        checkBoxWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        checkBoxOS->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        radioButtonLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        radioButtonWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        radioButtonOS->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\303\251v\303\250nement :", nullptr));
        pushButtonLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        pushButtonWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        pushButtonOS->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        menulangages->setTitle(QApplication::translate("MainWindow", "langages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
