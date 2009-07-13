#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <QtGui/QDialog>

class QListWidget;

namespace Ui
{
    class Launcher;
}

class Launcher : public QDialog
{
    Q_OBJECT

public:
    Launcher(QWidget *parent = 0);
    ~Launcher();
    void accept();

private:
    Ui::Launcher *ui;
    //QListWidget *lstBrowsers;
};

#endif // LAUNCHER_H
