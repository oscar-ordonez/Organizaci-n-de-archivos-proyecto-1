#include "agregarcliente.h"
#include "ui_agregarcliente.h"

AgregarCliente::AgregarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AgregarCliente)
{
    ui->setupUi(this);
}

AgregarCliente::~AgregarCliente()
{
    delete ui;
}
