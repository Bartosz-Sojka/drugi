#ifndef NEWFILE_H
#define NEWFILE_H

#include <QMainWindow>

namespace Ui {
class newfile;
}

class newfile : public QMainWindow
{
    Q_OBJECT

public:
    explicit newfile(QWidget *parent = 0);
    ~newfile();

private:
    Ui::newfile *ui;
};

#endif // NEWFILE_H
