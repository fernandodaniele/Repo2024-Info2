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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QComboBox *elegirPuerto;
    QLineEdit *datosEnviar;
    QPushButton *conectar;
    QPushButton *enviar;
    QLabel *label_2;
    QLabel *label_4;
    QTextEdit *datosRecibidos;
    QMenuBar *menubar;
    QMenu *menuSerial_monitor_InfoII;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1073, 695);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        elegirPuerto = new QComboBox(centralwidget);
        elegirPuerto->setObjectName("elegirPuerto");

        gridLayout->addWidget(elegirPuerto, 1, 0, 1, 1);

        datosEnviar = new QLineEdit(centralwidget);
        datosEnviar->setObjectName("datosEnviar");
        datosEnviar->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(datosEnviar, 1, 1, 1, 2);

        conectar = new QPushButton(centralwidget);
        conectar->setObjectName("conectar");

        gridLayout->addWidget(conectar, 2, 0, 1, 1);

        enviar = new QPushButton(centralwidget);
        enviar->setObjectName("enviar");

        gridLayout->addWidget(enviar, 2, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        datosRecibidos = new QTextEdit(centralwidget);
        datosRecibidos->setObjectName("datosRecibidos");

        gridLayout->addWidget(datosRecibidos, 4, 1, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1073, 25));
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
        label->setText(QCoreApplication::translate("MainWindow", "Puerto COM", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Datos a enviar", nullptr));
        datosEnviar->setText(QString());
        conectar->setText(QCoreApplication::translate("MainWindow", "Conectar", nullptr));
        enviar->setText(QCoreApplication::translate("MainWindow", "Enviar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Datos recibidos", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ac\303\241 podr\303\255amos agregar mas opciones de configuraci\303\263n, como velocidad en baudios, bits de stop, paridad ...", nullptr));
        menuSerial_monitor_InfoII->setTitle(QCoreApplication::translate("MainWindow", "Serial monitor InfoII", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
