#ifndef ELIMINARCIUDAD_H
#define ELIMINARCIUDAD_H

#include <QDialog>

namespace Ui {
class EliminarCiudad;
}

class EliminarCiudad : public QDialog
{
    Q_OBJECT

public:
    explicit EliminarCiudad(QWidget *parent = 0);
    ~EliminarCiudad();

private:
    Ui::EliminarCiudad *ui;
};

#endif // ELIMINARCIUDAD_H
