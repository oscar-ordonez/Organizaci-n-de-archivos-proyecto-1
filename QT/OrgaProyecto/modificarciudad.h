#ifndef MODIFICARCIUDAD_H
#define MODIFICARCIUDAD_H

#include <QDialog>

namespace Ui {
class ModificarCiudad;
}

class ModificarCiudad : public QDialog
{
    Q_OBJECT

public:
    explicit ModificarCiudad(QWidget *parent = 0);
    ~ModificarCiudad();

private:
    Ui::ModificarCiudad *ui;
};

#endif // MODIFICARCIUDAD_H
