#ifndef ELIMINARCLIENTE_H
#define ELIMINARCLIENTE_H

#include <QDialog>

namespace Ui {
class EliminarCliente;
}

class EliminarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit EliminarCliente(QWidget *parent = 0);
    ~EliminarCliente();

private:
    Ui::EliminarCliente *ui;
};

#endif // ELIMINARCLIENTE_H
