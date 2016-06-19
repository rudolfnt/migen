#include "migenmainwindow.h"
#include "ui_migenmainwindow.h"



#include <QtWidgets>

MIGenMainWindow::MIGenMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MIGenMainWindow)
{
    centralWidget = Q_NULLPTR;
    ui->setupUi(this);
    init();
}

MIGenMainWindow::~MIGenMainWindow()
{
    delete ui;
}

void MIGenMainWindow::init()
{
    //setAttribute(Qt::WA_DeleteOnClose);
    setWindowTitle(tr("CBA munkaidő nyilvántartás"));
    createActions();
    removeToolBar(ui->mainToolBar);

    centralWidget = new CentralWidget(this);
    setCentralWidget(centralWidget);
}

void MIGenMainWindow::createActions()
{
    QMenu * fileMenu = menuBar()->addMenu(tr("&Fájl"));
    QAction * openAction = new QAction(tr("&Megnyitás"), this);
    openAction->setStatusTip(tr("Roger CSV adatfájl megnyitása"));
    connect(openAction, &QAction::triggered, this, &MIGenMainWindow::openDataFile);
    fileMenu->addAction(openAction);

    fileMenu->addSeparator();

    QAction * exitAction = new QAction(tr("&Kilépés"), this);
    exitAction->setStatusTip(tr("Kilépés az alkalmazásból"));
    connect(exitAction, &QAction::triggered, this, &MIGenMainWindow::close);
    fileMenu->addAction(exitAction);

    QAction * settingsAction = new QAction(tr("&Beállítások"), this);
    settingsAction->setStatusTip(tr("Program beállítások"));
    connect(settingsAction, &QAction::triggered, this, &MIGenMainWindow::settings);
    menuBar()->addAction(settingsAction);

    QMenu * helpMenu = menuBar()->addMenu(tr("&Súgó"));
    QAction * helpAction = new QAction(tr("Súgó"), this);
    helpAction->setStatusTip(tr("Az alkalmazás súgója"));
    helpMenu->addAction(helpAction);

    QAction * aboutAction = new QAction(tr("Névjegy"), this);
    aboutAction->setStatusTip(tr("Az alkalmazás névjegye"));
    connect(aboutAction, &QAction::triggered, this, &MIGenMainWindow::about);
    helpMenu->addAction(aboutAction);

}

void MIGenMainWindow::openDataFile()
{

}

void MIGenMainWindow::settings()
{

}

void MIGenMainWindow::about()
{

}
