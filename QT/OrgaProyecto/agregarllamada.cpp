#include "agregarllamada.h"
#include "ui_agregarllamada.h"

AgregarLlamada::AgregarLlamada(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AgregarLlamada)
{
    ui->setupUi(this);
}

AgregarLlamada::~AgregarLlamada()
{
    delete ui;
}
