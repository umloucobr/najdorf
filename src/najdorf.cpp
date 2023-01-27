#include "najdorf.h"
#include "./ui_najdorf.h"

Najdorf::Najdorf(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Najdorf)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
    ui->plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
}

Najdorf::~Najdorf()
{
    delete ui;
}

void Najdorf::on_actionExplorer_toggled(bool arg1)
{
    if (arg1) {
        ui->explorer->show();
    }
    else {
        ui->explorer->hide();
        ui->actionExplorer->setChecked(false);
    }
}

void Najdorf::on_actionOutput_toggled(bool arg1)
{
    if (arg1) {
        ui->output->show();
    }
    else {
        ui->output->hide();
        ui->actionOutput->setChecked(false);
    }
}

void Najdorf::on_explorer_visibilityChanged(bool visible)
{
    if (!visible) {
        Najdorf::on_actionExplorer_toggled(false);
    }
}

void Najdorf::on_output_visibilityChanged(bool visible)
{
    if (!visible) {
        Najdorf::on_actionOutput_toggled(false);
    }
}
