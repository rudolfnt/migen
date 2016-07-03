#ifndef SETTINGSFORM_H
#define SETTINGSFORM_H

#include <QWidget>

namespace Ui {
class SettingsForm;
}

class SettingsForm : public QWidget
{
    Q_OBJECT

public:
    explicit SettingsForm(QWidget *parent = 0);
    ~SettingsForm();

private:
    Ui::SettingsForm *ui;

    void init();
    void loadFile();
};

#endif // SETTINGSFORM_H
