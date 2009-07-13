#include "launcher.h"
#include "ui_launcher.h"

#include <iostream>

Launcher::Launcher(QWidget *parent)
    : QDialog(parent), ui(new Ui::Launcher)
{
    ui->setupUi(this);
}

Launcher::~Launcher()
{
    delete ui;
}

void Launcher::accept()
{
    std::cout << qPrintable(ui->lstBrowsers->currentItem()->text()) << std::endl;

    QDialog::accept();
}
