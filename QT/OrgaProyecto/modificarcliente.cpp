#include "modificarcliente.h"
#include "ui_modificarcliente.h"

ModificarCliente::ModificarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModificarCliente)
{
    ui->setupUi(this);
}

ModificarCliente::~ModificarCliente()
{
    delete ui;
}
