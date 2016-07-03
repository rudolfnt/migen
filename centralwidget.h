#ifndef CENTRALWIDGET_H
#define CENTRALWIDGET_H

class SettingsForm;
class AboutDialog;

#include <QWidget>

namespace Ui {
class CentralWidget;
}

class CentralWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CentralWidget(QWidget *parent = 0);
    ~CentralWidget();

private:
    Ui::CentralWidget *ui;

    SettingsForm * settingsForm;
    AboutDialog * aboutDialog;

    void init();
};

#endif // CENTRALWIDGET_H
