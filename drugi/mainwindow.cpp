#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newfile.h"
#include "dialogversion.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionFile_triggered()
{

}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_actionVersion_triggered()
{

}

void MainWindow::on_actionVersion_changed()
{

}
