#include "eliminarllamada.h"
#include "ui_eliminarllamada.h"

EliminarLlamada::EliminarLlamada(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EliminarLlamada)
{
    ui->setupUi(this);
}

EliminarLlamada::~EliminarLlamada()
{
    delete ui;
}
