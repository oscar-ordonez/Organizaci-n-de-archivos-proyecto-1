/********************************************************************************
** Form generated from reading UI file 'modificarcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARCLIENTE_H
#define UI_MODIFICARCLIENTE_H

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
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_ModificarCliente
{
public:
    QLabel *label_2;
    QLabel *label_6;
    QRadioButton *MClienteF;
    QLineEdit *MClienteId;
    QRadioButton *MClienteM;
    QLabel *label;
    QLineEdit *MClienteApellido;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *MClienteNombre;
    QLabel *label_5;
    QComboBox *MClienteCiudad;
    QPushButton *MClienteBotonModificar;

    void setupUi(QDialog *ModificarCliente)
    {
        if (ModificarCliente->objectName().isEmpty())
            ModificarCliente->setObjectName(QStringLiteral("ModificarCliente"));
        ModificarCliente->resize(400, 300);
        label_2 = new QLabel(ModificarCliente);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 80, 57, 15));
        label_6 = new QLabel(ModificarCliente);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 200, 61, 16));
        MClienteF = new QRadioButton(ModificarCliente);
        MClienteF->setObjectName(QStringLiteral("MClienteF"));
        MClienteF->setGeometry(QRect(160, 170, 100, 21));
        MClienteId = new QLineEdit(ModificarCliente);
        MClienteId->setObjectName(QStringLiteral("MClienteId"));
        MClienteId->setGeometry(QRect(130, 80, 191, 23));
        MClienteM = new QRadioButton(ModificarCliente);
        MClienteM->setObjectName(QStringLiteral("MClienteM"));
        MClienteM->setGeometry(QRect(230, 170, 100, 21));
        label = new QLabel(ModificarCliente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 201, 31));
        MClienteApellido = new QLineEdit(ModificarCliente);
        MClienteApellido->setObjectName(QStringLiteral("MClienteApellido"));
        MClienteApellido->setGeometry(QRect(130, 140, 191, 23));
        label_3 = new QLabel(ModificarCliente);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 110, 57, 15));
        label_4 = new QLabel(ModificarCliente);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 140, 57, 15));
        MClienteNombre = new QLineEdit(ModificarCliente);
        MClienteNombre->setObjectName(QStringLiteral("MClienteNombre"));
        MClienteNombre->setGeometry(QRect(130, 110, 191, 23));
        label_5 = new QLabel(ModificarCliente);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 170, 57, 15));
        MClienteCiudad = new QComboBox(ModificarCliente);
        MClienteCiudad->setObjectName(QStringLiteral("MClienteCiudad"));
        MClienteCiudad->setGeometry(QRect(130, 200, 191, 23));
        MClienteBotonModificar = new QPushButton(ModificarCliente);
        MClienteBotonModificar->setObjectName(QStringLiteral("MClienteBotonModificar"));
        MClienteBotonModificar->setGeometry(QRect(180, 250, 80, 23));

        retranslateUi(ModificarCliente);

        QMetaObject::connectSlotsByName(ModificarCliente);
    } // setupUi

    void retranslateUi(QDialog *ModificarCliente)
    {
        ModificarCliente->setWindowTitle(QApplication::translate("ModificarCliente", "Dialog", 0));
        label_2->setText(QApplication::translate("ModificarCliente", "ID", 0));
        label_6->setText(QApplication::translate("ModificarCliente", "ID Ciudad", 0));
        MClienteF->setText(QApplication::translate("ModificarCliente", "F", 0));
        MClienteM->setText(QApplication::translate("ModificarCliente", "M", 0));
        label->setText(QApplication::translate("ModificarCliente", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Modificar Cliente</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("ModificarCliente", "Nombre", 0));
        label_4->setText(QApplication::translate("ModificarCliente", "Apellido", 0));
        label_5->setText(QApplication::translate("ModificarCliente", "Genero", 0));
        MClienteBotonModificar->setText(QApplication::translate("ModificarCliente", "Modificar", 0));
    } // retranslateUi

};

namespace Ui {
    class ModificarCliente: public Ui_ModificarCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARCLIENTE_H
