/********************************************************************************
** Form generated from reading UI file 'modificarciudad.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARCIUDAD_H
#define UI_MODIFICARCIUDAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ModificarCiudad
{
public:
    QLabel *label_2;
    QLineEdit *MCiudadId;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *MCiudadNombre;
    QPushButton *MCiudadBotonModificar;

    void setupUi(QDialog *ModificarCiudad)
    {
        if (ModificarCiudad->objectName().isEmpty())
            ModificarCiudad->setObjectName(QStringLiteral("ModificarCiudad"));
        ModificarCiudad->resize(400, 300);
        label_2 = new QLabel(ModificarCiudad);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 110, 57, 15));
        MCiudadId = new QLineEdit(ModificarCiudad);
        MCiudadId->setObjectName(QStringLiteral("MCiudadId"));
        MCiudadId->setGeometry(QRect(140, 150, 181, 23));
        label_3 = new QLabel(ModificarCiudad);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 150, 57, 15));
        label = new QLabel(ModificarCiudad);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 201, 41));
        MCiudadNombre = new QLineEdit(ModificarCiudad);
        MCiudadNombre->setObjectName(QStringLiteral("MCiudadNombre"));
        MCiudadNombre->setGeometry(QRect(140, 110, 181, 23));
        MCiudadBotonModificar = new QPushButton(ModificarCiudad);
        MCiudadBotonModificar->setObjectName(QStringLiteral("MCiudadBotonModificar"));
        MCiudadBotonModificar->setGeometry(QRect(150, 210, 80, 23));

        retranslateUi(ModificarCiudad);

        QMetaObject::connectSlotsByName(ModificarCiudad);
    } // setupUi

    void retranslateUi(QDialog *ModificarCiudad)
    {
        ModificarCiudad->setWindowTitle(QApplication::translate("ModificarCiudad", "Dialog", 0));
        label_2->setText(QApplication::translate("ModificarCiudad", "Nombre", 0));
        label_3->setText(QApplication::translate("ModificarCiudad", "ID", 0));
        label->setText(QApplication::translate("ModificarCiudad", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Modificar Ciudad</span></p></body></html>", 0));
        MCiudadBotonModificar->setText(QApplication::translate("ModificarCiudad", "Modificar", 0));
    } // retranslateUi

};

namespace Ui {
    class ModificarCiudad: public Ui_ModificarCiudad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARCIUDAD_H
