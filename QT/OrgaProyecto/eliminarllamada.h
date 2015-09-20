#ifndef ELIMINARLLAMADA_H
#define ELIMINARLLAMADA_H

#include <QDialog>

namespace Ui {
class EliminarLlamada;
}

class EliminarLlamada : public QDialog
{
    Q_OBJECT

public:
    explicit EliminarLlamada(QWidget *parent = 0);
    ~EliminarLlamada();

private:
    Ui::EliminarLlamada *ui;
};

#endif // ELIMINARLLAMADA_H
