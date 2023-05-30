#include "mainwindow.h"
#include <QMessageBox>
#include "./ui_mainwindow.h"
void MainWindow::handleButtonClicked()
{
    // Button click handling code goes here
    // For example, you can display a message box
    QMessageBox::information(this, "Button Clicked", "The button was clicked!");
}

void MainWindow::helloWorld(){
    QMessageBox::information(this, "Button Clicked", "The button was clicked!");
}
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    button = new QPushButton("Click me!", this);
    button->setGeometry(10, 10, 100, 30);

    connect(button, &QPushButton::clicked, this, &MainWindow::handleButtonClicked);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::handleButtonClicked);
    QObject::connect(ui->pushButton_2, &QPushButton::clicked, this, &QApplication::quit);

}



MainWindow::~MainWindow()
{
    delete ui;
}

