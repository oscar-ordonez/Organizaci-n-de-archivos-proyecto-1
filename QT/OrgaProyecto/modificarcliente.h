#ifndef MODIFICARCLIENTE_H
#define MODIFICARCLIENTE_H

#include <QDialog>

namespace Ui {
class ModificarCliente;
}

class ModificarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit ModificarCliente(QWidget *parent = 0);
    ~ModificarCliente();

private:
    Ui::ModificarCliente *ui;
};

#endif // MODIFICARCLIENTE_H
