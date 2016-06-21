#include "aboutdialog.h"
#include "ui_aboutdialog.h"


AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    init();
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::init()
{
    setWindowTitle(tr("Névjegy"));
    ui->closeButton->setText(tr("Bezár"));
    connect(ui->closeButton, &QPushButton::clicked, this, &QDialog::close);
}
