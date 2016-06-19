#ifndef MIGENMAINWINDOW_H
#define MIGENMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MIGenMainWindow;
}

class MIGenMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MIGenMainWindow(QWidget *parent = 0);
    ~MIGenMainWindow();

private:
    Ui::MIGenMainWindow *ui;
};

#endif // MIGENMAINWINDOW_H
