/********************************************************************************
** Form generated from reading UI file 'eliminarlinea_de_cliente.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINARLINEA_DE_CLIENTE_H
#define UI_ELIMINARLINEA_DE_CLIENTE_H

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

class Ui_EliminarLinea_de_Cliente
{
public:
    QLabel *label_2;
    QPushButton *ELineaBotonEliminar;
    QLabel *label;
    QComboBox *ELineaCliente;
    QComboBox *ELineaLineas;
    QLabel *label_3;

    void setupUi(QDialog *EliminarLinea_de_Cliente)
    {
        if (EliminarLinea_de_Cliente->objectName().isEmpty())
            EliminarLinea_de_Cliente->setObjectName(QStringLiteral("EliminarLinea_de_Cliente"));
        EliminarLinea_de_Cliente->resize(400, 300);
        label_2 = new QLabel(EliminarLinea_de_Cliente);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 90, 57, 15));
        ELineaBotonEliminar = new QPushButton(EliminarLinea_de_Cliente);
        ELineaBotonEliminar->setObjectName(QStringLiteral("ELineaBotonEliminar"));
        ELineaBotonEliminar->setGeometry(QRect(170, 190, 80, 23));
        label = new QLabel(EliminarLinea_de_Cliente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 301, 31));
        ELineaCliente = new QComboBox(EliminarLinea_de_Cliente);
        ELineaCliente->setObjectName(QStringLiteral("ELineaCliente"));
        ELineaCliente->setGeometry(QRect(140, 90, 201, 23));
        ELineaLineas = new QComboBox(EliminarLinea_de_Cliente);
        ELineaLineas->setObjectName(QStringLiteral("ELineaLineas"));
        ELineaLineas->setGeometry(QRect(140, 130, 201, 23));
        label_3 = new QLabel(EliminarLinea_de_Cliente);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 130, 57, 15));

        retranslateUi(EliminarLinea_de_Cliente);

        QMetaObject::connectSlotsByName(EliminarLinea_de_Cliente);
    } // setupUi

    void retranslateUi(QDialog *EliminarLinea_de_Cliente)
    {
        EliminarLinea_de_Cliente->setWindowTitle(QApplication::translate("EliminarLinea_de_Cliente", "Dialog", 0));
        label_2->setText(QApplication::translate("EliminarLinea_de_Cliente", "Cliente", 0));
        ELineaBotonEliminar->setText(QApplication::translate("EliminarLinea_de_Cliente", "Eliminar", 0));
        label->setText(QApplication::translate("EliminarLinea_de_Cliente", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Eliminar Linea de Cliente</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("EliminarLinea_de_Cliente", "Lineas", 0));
    } // retranslateUi

};

namespace Ui {
    class EliminarLinea_de_Cliente: public Ui_EliminarLinea_de_Cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINARLINEA_DE_CLIENTE_H
