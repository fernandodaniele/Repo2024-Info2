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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
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
    QPushButton *saveButton;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QPushButton *openButton;
    QMenuBar *menubar;
    QMenu *menuEditor_de_archivos_de_texto;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(409, 187);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");

        gridLayout->addWidget(saveButton, 5, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 0, 1, 6, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        openButton = new QPushButton(centralwidget);
        openButton->setObjectName("openButton");

        gridLayout->addWidget(openButton, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 409, 17));
        menuEditor_de_archivos_de_texto = new QMenu(menubar);
        menuEditor_de_archivos_de_texto->setObjectName("menuEditor_de_archivos_de_texto");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuEditor_de_archivos_de_texto->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Editor de archivos de texto", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Crear y guardar archivo", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Abrir y leer archivo", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        menuEditor_de_archivos_de_texto->setTitle(QCoreApplication::translate("MainWindow", "Editor de archivos de texto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
