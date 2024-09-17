#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void connectButtonClicked(); //Se ejecuta con clic en Conectar
    void sendButtonClicked(); //Se ejecuta con clic en Enviar
    void readSerialData(); //Lee datos recibidos y los muestra en el QTextEdit
    void populateSerialPorts(); //Consulta puertos COM disponibles
    void handleSerialError(QSerialPort::SerialPortError error); //Se ejecuta cuando hay error en puerto COM

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
    QTimer *timer;
};

#endif // MAINWINDOW_H
