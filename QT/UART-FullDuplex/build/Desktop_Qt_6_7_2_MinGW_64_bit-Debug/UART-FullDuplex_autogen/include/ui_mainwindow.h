/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *conectar;
    QTextEdit *datosRecibidos;
    QLineEdit *datosEnviar;
    QPushButton *enviar;
    QComboBox *elegirPuerto;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QMenu *menuSerial_monitor_InfoII;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1080, 720);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        conectar = new QPushButton(centralwidget);
        conectar->setObjectName("conectar");
        conectar->setGeometry(QRect(10, 90, 83, 29));
        datosRecibidos = new QTextEdit(centralwidget);
        datosRecibidos->setObjectName("datosRecibidos");
        datosRecibidos->setGeometry(QRect(130, 150, 921, 501));
        datosEnviar = new QLineEdit(centralwidget);
        datosEnviar->setObjectName("datosEnviar");
        datosEnviar->setGeometry(QRect(130, 50, 921, 28));
        datosEnviar->setLayoutDirection(Qt::LeftToRight);
        enviar = new QPushButton(centralwidget);
        enviar->setObjectName("enviar");
        enviar->setGeometry(QRect(960, 90, 83, 29));
        elegirPuerto = new QComboBox(centralwidget);
        elegirPuerto->setObjectName("elegirPuerto");
        elegirPuerto->setGeometry(QRect(10, 50, 82, 28));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 81, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 120, 111, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 20, 101, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 160, 101, 221));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1080, 25));
        menuSerial_monitor_InfoII = new QMenu(menubar);
        menuSerial_monitor_InfoII->setObjectName("menuSerial_monitor_InfoII");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSerial_monitor_InfoII->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Serial Monitor Inform\303\241tica II", nullptr));
        conectar->setText(QCoreApplication::translate("MainWindow", "Conectar", nullptr));
        datosEnviar->setText(QString());
        enviar->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Puerto COM", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Datos recibidos", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Datos a enviar", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ac\303\241 podr\303\255amos agregar mas opciones de configuraci\303\263n, como velocidad en baudios, bits de stop, paridad ...", nullptr));
        menuSerial_monitor_InfoII->setTitle(QCoreApplication::translate("MainWindow", "Serial monitor InfoII", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
