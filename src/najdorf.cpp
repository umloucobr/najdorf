#include "najdorf.h"
#include "./ui_najdorf.h"

Najdorf::Najdorf(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Najdorf)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
}

Najdorf::~Najdorf()
{
    delete ui;
}

void Najdorf::on_actionFile_Explorer_toggled(bool arg1)
{
    if (arg1) {
        ui->dockWidget->show();
    }
    else {
        ui->dockWidget->hide();
        ui->actionFile_Explorer->setChecked(false);
    }
}


void Najdorf::on_dockWidget_visibilityChanged(bool visible)
{
    if (!visible) {
        Najdorf::on_actionFile_Explorer_toggled(false);
    }
}
