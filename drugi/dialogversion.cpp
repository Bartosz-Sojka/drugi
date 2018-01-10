#include "dialogversion.h"
#include "ui_dialogversion.h"

Dialogversion::Dialogversion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogversion)
{
    ui->setupUi(this);
}

Dialogversion::~Dialogversion()
{
    delete ui;
}

void Dialogversion::on_textEdit_copyAvailable(bool b)
{

}
