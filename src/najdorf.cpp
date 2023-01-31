#include "najdorf.h"
#include "./ui_najdorf.h"

Najdorf::Najdorf(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Najdorf)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
    setCorner(Qt::BottomRightCorner, Qt::RightDockWidgetArea);
    applyStyleSheet(true);
}

Najdorf::~Najdorf()
{
    delete ui;
}

void Najdorf::applyStyleSheet(bool isDarkMode) {
    if (isDarkMode){
        setStyleSheet("QMainWindow{background-color: #1F1F1F}"
                      "QMenuBar::item:selected{background-color: #383838;}");
        ui->menubar->setStyleSheet("background-color: #1F1F1F;"
                                   "color: #D6D6D6;"
                                   "selection-background-color: #383838;");
        ui->plainTextEdit->setStyleSheet("background-color: #1F1F1F;"
                                         "color: #C8C8C8;"
                                         "border:1px solid #3D3D3D;");
        ui->explorer->setStyleSheet("background-color: #1F1F1F;"
                                    "color: #B2B2B2;"
                                    "border: 1px solid #3D3D3D;");
        ui->output->setStyleSheet("background-color: #1F1F1F;"
                                  "color: #B2B2B2;"
                                  "border: 1px solid #3D3D3D");
    }
};

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
