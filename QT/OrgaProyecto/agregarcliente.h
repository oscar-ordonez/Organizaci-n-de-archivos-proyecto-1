#ifndef AGREGARCLIENTE_H
#define AGREGARCLIENTE_H

#include <QDialog>

namespace Ui {
class AgregarCliente;
}

class AgregarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit AgregarCliente(QWidget *parent = 0);
    ~AgregarCliente();

private:
    Ui::AgregarCliente *ui;
};

#endif // AGREGARCLIENTE_H
