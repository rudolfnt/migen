#include "centralwidget.h"
#include "ui_centralwidget.h"
#include "settingsform.h"
#include "aboutdialog.h"
#include <QPushButton>

#include <QMessageBox>

CentralWidget::CentralWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CentralWidget)
{
    settingsForm = NULL;
    aboutDialog = NULL;
    ui->setupUi(this);
    init();
}

CentralWidget::~CentralWidget()
{
    delete ui;
}

void CentralWidget::init()
{
    for( int i = ui->stackedWidget->count(); i > -1; --i)
    {
        ui->stackedWidget->removeWidget(ui->stackedWidget->widget(i));
    }

    settingsForm = new SettingsForm(this);
    ui->stackedWidget->addWidget(settingsForm);

    QPushButton * pb = new QPushButton("AAA");
    ui->stackedWidget->addWidget(pb);

    aboutDialog = new AboutDialog;
    ui->stackedWidget->addWidget(aboutDialog);
}
