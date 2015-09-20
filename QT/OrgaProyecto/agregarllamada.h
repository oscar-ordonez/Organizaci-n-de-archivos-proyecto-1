#ifndef AGREGARLLAMADA_H
#define AGREGARLLAMADA_H

#include <QDialog>

namespace Ui {
class AgregarLlamada;
}

class AgregarLlamada : public QDialog
{
    Q_OBJECT

public:
    explicit AgregarLlamada(QWidget *parent = 0);
    ~AgregarLlamada();

private:
    Ui::AgregarLlamada *ui;
};

#endif // AGREGARLLAMADA_H
