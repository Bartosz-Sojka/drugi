#ifndef DIALOGVERSION_H
#define DIALOGVERSION_H

#include <QDialog>

namespace Ui {
class Dialogversion;
}

class Dialogversion : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogversion(QWidget *parent = 0);
    ~Dialogversion();

private slots:
    void on_textEdit_copyAvailable(bool b);

private:
    Ui::Dialogversion *ui;
};

#endif // DIALOGVERSION_H
