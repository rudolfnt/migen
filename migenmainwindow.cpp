#include "migenmainwindow.h"
#include "ui_migenmainwindow.h"

MIGenMainWindow::MIGenMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MIGenMainWindow)
{
    ui->setupUi(this);
}

MIGenMainWindow::~MIGenMainWindow()
{
    delete ui;
}
