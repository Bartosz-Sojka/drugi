#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionFile_triggered();

    void on_pushButton_clicked();

    void on_actionVersion_triggered();

    void on_actionVersion_changed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
