#include "eliminarciudad.h"
#include "ui_eliminarciudad.h"

EliminarCiudad::EliminarCiudad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EliminarCiudad)
{
    ui->setupUi(this);
}

EliminarCiudad::~EliminarCiudad()
{
    delete ui;
}
