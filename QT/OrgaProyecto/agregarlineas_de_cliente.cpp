#include "agregarlineas_de_cliente.h"
#include "ui_agregarlineas_de_cliente.h"

AgregarLineas_de_Cliente::AgregarLineas_de_Cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AgregarLineas_de_Cliente)
{
    ui->setupUi(this);
}

AgregarLineas_de_Cliente::~AgregarLineas_de_Cliente()
{
    delete ui;
}
