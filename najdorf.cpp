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



