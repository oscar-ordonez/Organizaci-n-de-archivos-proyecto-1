/********************************************************************************
** Form generated from reading UI file 'agregarlineas_de_cliente.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARLINEAS_DE_CLIENTE_H
#define UI_AGREGARLINEAS_DE_CLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AgregarLineas_de_Cliente
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *ALineaIdCliente;
    QLineEdit *ALineaNombre;
    QPushButton *ALineaBotonAgregar;

    void setupUi(QDialog *AgregarLineas_de_Cliente)
    {
        if (AgregarLineas_de_Cliente->objectName().isEmpty())
            AgregarLineas_de_Cliente->setObjectName(QStringLiteral("AgregarLineas_de_Cliente"));
        AgregarLineas_de_Cliente->resize(400, 300);
        label = new QLabel(AgregarLineas_de_Cliente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 181, 31));
        label_2 = new QLabel(AgregarLineas_de_Cliente);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 90, 61, 16));
        label_3 = new QLabel(AgregarLineas_de_Cliente);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 140, 57, 15));
        ALineaIdCliente = new QComboBox(AgregarLineas_de_Cliente);
        ALineaIdCliente->setObjectName(QStringLiteral("ALineaIdCliente"));
        ALineaIdCliente->setGeometry(QRect(120, 90, 241, 23));
        ALineaNombre = new QLineEdit(AgregarLineas_de_Cliente);
        ALineaNombre->setObjectName(QStringLiteral("ALineaNombre"));
        ALineaNombre->setGeometry(QRect(120, 140, 241, 23));
        ALineaBotonAgregar = new QPushButton(AgregarLineas_de_Cliente);
        ALineaBotonAgregar->setObjectName(QStringLiteral("ALineaBotonAgregar"));
        ALineaBotonAgregar->setGeometry(QRect(150, 200, 80, 23));

        retranslateUi(AgregarLineas_de_Cliente);

        QMetaObject::connectSlotsByName(AgregarLineas_de_Cliente);
    } // setupUi

    void retranslateUi(QDialog *AgregarLineas_de_Cliente)
    {
        AgregarLineas_de_Cliente->setWindowTitle(QApplication::translate("AgregarLineas_de_Cliente", "Dialog", 0));
        label->setText(QApplication::translate("AgregarLineas_de_Cliente", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Agregar Linea</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("AgregarLineas_de_Cliente", "ID Cliente", 0));
        label_3->setText(QApplication::translate("AgregarLineas_de_Cliente", "Numero", 0));
        ALineaBotonAgregar->setText(QApplication::translate("AgregarLineas_de_Cliente", "Agregar", 0));
    } // retranslateUi

};

namespace Ui {
    class AgregarLineas_de_Cliente: public Ui_AgregarLineas_de_Cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARLINEAS_DE_CLIENTE_H
