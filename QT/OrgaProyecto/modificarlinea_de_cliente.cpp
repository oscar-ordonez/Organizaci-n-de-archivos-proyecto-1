#include "modificarlinea_de_cliente.h"
#include "ui_modificarlinea_de_cliente.h"

ModificarLinea_de_Cliente::ModificarLinea_de_Cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModificarLinea_de_Cliente)
{
    ui->setupUi(this);
}

ModificarLinea_de_Cliente::~ModificarLinea_de_Cliente()
{
    delete ui;
}
