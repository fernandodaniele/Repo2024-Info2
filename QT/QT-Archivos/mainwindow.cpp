#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Conectamos señales y slots
    connect(ui->openButton, &QPushButton::clicked, this, &MainWindow::onOpenButtonClicked);
    connect(ui->saveButton, &QPushButton::clicked, this, &MainWindow::onSaveButtonClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onOpenButtonClicked() {
    // Abre un cuadro de diálogo para seleccionar un archivo de texto
    QString fileName = QFileDialog::getOpenFileName(this, "Abrir Archivo de Texto", "", "Archivos de Texto (*.txt)");

    // Verifica si se seleccionó un archivo (la cadena no está vacía)
    if (!fileName.isEmpty()) {
        QFile file(fileName); // Crea un objeto QFile con el nombre del archivo seleccionado
        // Intenta abrir el archivo en modo solo lectura y como texto
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file); // Crea un flujo de texto para leer el contenido del archivo
            ui->textEdit->setText(in.readAll()); // Lee todo el contenido del archivo y lo muestra en el QTextEdit
            file.close(); // Cierra el archivo después de leerlo
        } else {
            QMessageBox::warning(this, "Error", "No se pudo abrir el archivo.");
        }
    }
}

void MainWindow::onSaveButtonClicked() {
    QString fileName = QFileDialog::getSaveFileName(this, "Guardar Archivo de Texto", "", "Archivos de Texto (*.txt)");

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        // Intenta abrir el archivo en modo solo escritura y como texto
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file); // Crea un flujo de texto para escribir en el archivo
            out << ui->textEdit->toPlainText(); // Escribe el contenido del QTextEdit en el archivo
            file.close();
        } else {
            QMessageBox::warning(this, "Error", "No se pudo guardar el archivo.");
        }
    }
}

