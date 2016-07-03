#include "settingsform.h"
#include "ui_settingsform.h"
#include <QFileDialog>

SettingsForm::SettingsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SettingsForm)
{
    ui->setupUi(this);
    init();
}

SettingsForm::~SettingsForm()
{
    delete ui;
}

void SettingsForm::init()
{
    ui->browseButton->setText(tr("Tallózás"));
    ui->loadButton->setText(tr("Fájl betöltése"));
    ui->dateLabel->setText(tr("Dátum oszlop"));
    ui->timeLabel->setText(tr("Idő oszlop"));
    ui->nameLabel->setText(tr("Név oszlop"));
    ui->entranceLabel->setText(tr("Belépési pont oszlop"));

    ui->sampleTableView->setVisible(false);
    connect(ui->loadButton, &QPushButton::clicked, this, &SettingsForm::loadFile);
}

void SettingsForm::loadFile()
{
    ui->sampleTableView->setVisible(true);
}
