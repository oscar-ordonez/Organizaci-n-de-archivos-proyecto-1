#ifndef ELIMINARLINEA_DE_CLIENTE_H
#define ELIMINARLINEA_DE_CLIENTE_H

#include <QDialog>

namespace Ui {
class EliminarLinea_de_Cliente;
}

class EliminarLinea_de_Cliente : public QDialog
{
    Q_OBJECT

public:
    explicit EliminarLinea_de_Cliente(QWidget *parent = 0);
    ~EliminarLinea_de_Cliente();

private:
    Ui::EliminarLinea_de_Cliente *ui;
};

#endif // ELIMINARLINEA_DE_CLIENTE_H
