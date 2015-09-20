#ifndef AGREGARLINEAS_DE_CLIENTE_H
#define AGREGARLINEAS_DE_CLIENTE_H

#include <QDialog>

namespace Ui {
class AgregarLineas_de_Cliente;
}

class AgregarLineas_de_Cliente : public QDialog
{
    Q_OBJECT

public:
    explicit AgregarLineas_de_Cliente(QWidget *parent = 0);
    ~AgregarLineas_de_Cliente();

private:
    Ui::AgregarLineas_de_Cliente *ui;
};

#endif // AGREGARLINEAS_DE_CLIENTE_H
