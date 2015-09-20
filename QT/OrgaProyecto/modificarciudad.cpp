#include "modificarciudad.h"
#include "ui_modificarciudad.h"

ModificarCiudad::ModificarCiudad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModificarCiudad)
{
    ui->setupUi(this);
}

ModificarCiudad::~ModificarCiudad()
{
    delete ui;
}
