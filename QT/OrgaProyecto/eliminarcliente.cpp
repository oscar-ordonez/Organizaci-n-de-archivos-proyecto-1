#include "eliminarcliente.h"
#include "ui_eliminarcliente.h"

EliminarCliente::EliminarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EliminarCliente)
{
    ui->setupUi(this);
}

EliminarCliente::~EliminarCliente()
{
    delete ui;
}
