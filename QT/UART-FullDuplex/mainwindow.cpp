#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)          // Llama al constructor de la clase base QMainWindow
    , ui(new Ui::MainWindow)       // Inicializa el puntero ui con una nueva instancia de Ui::MainWindow
    , serial(new QSerialPort(this))// Inicializa el puntero serial con una nueva instancia de QSerialPort, asociada a 'this' (la ventana principal)
    , timer(new QTimer(this))      // Inicializa el puntero timer con una nueva instancia de QTimer, asociada a 'this' (la ventana principal)
{
    ui->setupUi(this); // Configura la interfaz de usuario definida en el archivo .ui

    // Conecta el botón 'conectar' al slot 'connectButtonClicked'
    connect(ui->conectar, &QPushButton::clicked, this, &MainWindow::connectButtonClicked);
    // Conecta el botón 'enviar' al slot 'sendButtonClicked'
    connect(ui->enviar, &QPushButton::clicked, this, &MainWindow::sendButtonClicked);
     // Conecta la señal readyRead del objeto QSerialPort al slot 'readSerialData'
    connect(serial, &QSerialPort::readyRead, this, &MainWindow::readSerialData);
     // Conecta la señal errorOccurred del objeto QSerialPort al slot 'handleSerialError'
    connect(serial, &QSerialPort::errorOccurred, this, &MainWindow::handleSerialError);

    // Configurar el temporizador para verificar los puertos disponibles
    connect(timer, &QTimer::timeout, this, &MainWindow::populateSerialPorts);
    timer->start(1000); // Inicia el temporizador para que se dispare cada 1000 ms (1 segundo)

    populateSerialPorts();// Llama a populateSerialPorts para llenar la lista de puertos disponibles al iniciar
}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
}

void MainWindow::populateSerialPorts()
{
    //elegirPuerto es el QComboBox para elegir puerto COM
    ui->elegirPuerto->clear();
    const auto serialPortInfos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &serialPortInfo : serialPortInfos) {
        ui->elegirPuerto->addItem(serialPortInfo.portName());
    }
}

void MainWindow::connectButtonClicked()
{
    QString portName = ui->elegirPuerto->currentText();
    serial->setPortName(portName);
    serial->setBaudRate(QSerialPort::Baud115200);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);

    if(serial->open(QIODevice::ReadWrite)) {
        QMessageBox::information(this, "Conexión exitosa", "Conectado al puerto " + portName);
        ui->statusbar->showMessage("Conectado al puerto " + portName);
    } else {
        QMessageBox::warning(this, "Error", serial->errorString());
    }
}

void MainWindow::sendButtonClicked()
{
    QString data = ui->datosEnviar->text();
    serial->write(data.toUtf8());
}

void MainWindow::readSerialData()
{
    QByteArray data = serial->readAll();
    ui->datosRecibidos->append(data);
}

void MainWindow::handleSerialError(QSerialPort::SerialPortError error)
{
    if (error == QSerialPort::ResourceError) {
        QMessageBox::critical(this, "Error", "Se ha desconectado el puerto COM");
        serial->close();
        ui->statusbar->showMessage("Desconectado");
        populateSerialPorts();
    }
}
