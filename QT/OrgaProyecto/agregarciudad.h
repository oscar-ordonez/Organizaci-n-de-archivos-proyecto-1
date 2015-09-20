#ifndef AGREGARCIUDAD_H
#define AGREGARCIUDAD_H

#include <QDialog>

namespace Ui {
class AgregarCiudad;
}

class AgregarCiudad : public QDialog
{
    Q_OBJECT

public:
    explicit AgregarCiudad(QWidget *parent = 0);
    ~AgregarCiudad();

private:
    Ui::AgregarCiudad *ui;
};

#endif // AGREGARCIUDAD_H
