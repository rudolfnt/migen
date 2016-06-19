#ifndef MIGENMAINWINDOW_H
#define MIGENMAINWINDOW_H

#include <QMainWindow>
#include "centralwidget.h"

namespace Ui {
class MIGenMainWindow;
}

class QAction;
class QMenu;

class MIGenMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MIGenMainWindow(QWidget *parent = 0);
    ~MIGenMainWindow();

private:
    void init();
    void createActions();

private slots:
    void openDataFile();
    void settings();
    void about();

private:
    Ui::MIGenMainWindow *ui;
    CentralWidget * centralWidget;
};

#endif // MIGENMAINWINDOW_H
