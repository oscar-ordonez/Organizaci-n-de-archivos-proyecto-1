#include "eliminarlinea_de_cliente.h"
#include "ui_eliminarlinea_de_cliente.h"

EliminarLinea_de_Cliente::EliminarLinea_de_Cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EliminarLinea_de_Cliente)
{
    ui->setupUi(this);
}

EliminarLinea_de_Cliente::~EliminarLinea_de_Cliente()
{
    delete ui;
}
