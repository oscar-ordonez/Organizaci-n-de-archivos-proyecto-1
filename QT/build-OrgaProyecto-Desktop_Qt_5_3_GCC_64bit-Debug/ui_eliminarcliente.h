/********************************************************************************
** Form generated from reading UI file 'eliminarcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINARCLIENTE_H
#define UI_ELIMINARCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EliminarCliente
{
public:
    QLabel *label_2;
    QPushButton *ECiudadBotonEliminar;
    QLabel *label;
    QComboBox *EClienteCliente;

    void setupUi(QDialog *EliminarCliente)
    {
        if (EliminarCliente->objectName().isEmpty())
            EliminarCliente->setObjectName(QStringLiteral("EliminarCliente"));
        EliminarCliente->resize(400, 300);
        label_2 = new QLabel(EliminarCliente);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 130, 57, 15));
        ECiudadBotonEliminar = new QPushButton(EliminarCliente);
        ECiudadBotonEliminar->setObjectName(QStringLiteral("ECiudadBotonEliminar"));
        ECiudadBotonEliminar->setGeometry(QRect(160, 200, 80, 23));
        label = new QLabel(EliminarCliente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 191, 31));
        EClienteCliente = new QComboBox(EliminarCliente);
        EClienteCliente->setObjectName(QStringLiteral("EClienteCliente"));
        EClienteCliente->setGeometry(QRect(140, 130, 201, 23));

        retranslateUi(EliminarCliente);

        QMetaObject::connectSlotsByName(EliminarCliente);
    } // setupUi

    void retranslateUi(QDialog *EliminarCliente)
    {
        EliminarCliente->setWindowTitle(QApplication::translate("EliminarCliente", "Dialog", 0));
        label_2->setText(QApplication::translate("EliminarCliente", "Cliente", 0));
        ECiudadBotonEliminar->setText(QApplication::translate("EliminarCliente", "Eliminar", 0));
        label->setText(QApplication::translate("EliminarCliente", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Eliminar Cliente</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class EliminarCliente: public Ui_EliminarCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINARCLIENTE_H
