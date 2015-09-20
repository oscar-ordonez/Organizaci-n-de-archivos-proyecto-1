#ifndef MODIFICARLINEA_DE_CLIENTE_H
#define MODIFICARLINEA_DE_CLIENTE_H

#include <QDialog>

namespace Ui {
class ModificarLinea_de_Cliente;
}

class ModificarLinea_de_Cliente : public QDialog
{
    Q_OBJECT

public:
    explicit ModificarLinea_de_Cliente(QWidget *parent = 0);
    ~ModificarLinea_de_Cliente();

private:
    Ui::ModificarLinea_de_Cliente *ui;
};

#endif // MODIFICARLINEA_DE_CLIENTE_H
