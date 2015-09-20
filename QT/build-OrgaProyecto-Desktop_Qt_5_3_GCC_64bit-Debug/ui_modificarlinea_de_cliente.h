/********************************************************************************
** Form generated from reading UI file 'modificarlinea_de_cliente.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARLINEA_DE_CLIENTE_H
#define UI_MODIFICARLINEA_DE_CLIENTE_H

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

class Ui_ModificarLinea_de_Cliente
{
public:
    QLabel *label;
    QPushButton *MLineaBotonModificar;
    QLabel *label_3;
    QComboBox *MLineaIdCliente;
    QLabel *label_2;
    QLineEdit *MLineaNumero;

    void setupUi(QDialog *ModificarLinea_de_Cliente)
    {
        if (ModificarLinea_de_Cliente->objectName().isEmpty())
            ModificarLinea_de_Cliente->setObjectName(QStringLiteral("ModificarLinea_de_Cliente"));
        ModificarLinea_de_Cliente->resize(400, 300);
        label = new QLabel(ModificarLinea_de_Cliente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 40, 181, 31));
        MLineaBotonModificar = new QPushButton(ModificarLinea_de_Cliente);
        MLineaBotonModificar->setObjectName(QStringLiteral("MLineaBotonModificar"));
        MLineaBotonModificar->setGeometry(QRect(150, 220, 80, 23));
        label_3 = new QLabel(ModificarLinea_de_Cliente);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 160, 57, 15));
        MLineaIdCliente = new QComboBox(ModificarLinea_de_Cliente);
        MLineaIdCliente->setObjectName(QStringLiteral("MLineaIdCliente"));
        MLineaIdCliente->setGeometry(QRect(120, 110, 241, 23));
        label_2 = new QLabel(ModificarLinea_de_Cliente);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 110, 61, 16));
        MLineaNumero = new QLineEdit(ModificarLinea_de_Cliente);
        MLineaNumero->setObjectName(QStringLiteral("MLineaNumero"));
        MLineaNumero->setGeometry(QRect(120, 160, 241, 23));

        retranslateUi(ModificarLinea_de_Cliente);

        QMetaObject::connectSlotsByName(ModificarLinea_de_Cliente);
    } // setupUi

    void retranslateUi(QDialog *ModificarLinea_de_Cliente)
    {
        ModificarLinea_de_Cliente->setWindowTitle(QApplication::translate("ModificarLinea_de_Cliente", "Dialog", 0));
        label->setText(QApplication::translate("ModificarLinea_de_Cliente", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Modificar Linea</span></p></body></html>", 0));
        MLineaBotonModificar->setText(QApplication::translate("ModificarLinea_de_Cliente", "Modificar", 0));
        label_3->setText(QApplication::translate("ModificarLinea_de_Cliente", "Numero", 0));
        label_2->setText(QApplication::translate("ModificarLinea_de_Cliente", "ID Cliente", 0));
    } // retranslateUi

};

namespace Ui {
    class ModificarLinea_de_Cliente: public Ui_ModificarLinea_de_Cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARLINEA_DE_CLIENTE_H
