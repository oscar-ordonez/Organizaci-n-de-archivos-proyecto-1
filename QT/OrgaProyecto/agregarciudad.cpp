#include "agregarciudad.h"
#include "ui_agregarciudad.h"

AgregarCiudad::AgregarCiudad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AgregarCiudad)
{
    ui->setupUi(this);
}

AgregarCiudad::~AgregarCiudad()
{
    delete ui;
}
