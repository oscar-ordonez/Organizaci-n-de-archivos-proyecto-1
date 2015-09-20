/********************************************************************************
** Form generated from reading UI file 'agregarciudad.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARCIUDAD_H
#define UI_AGREGARCIUDAD_H

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

class Ui_AgregarCiudad
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *ACiudadNombre;
    QLineEdit *ACiudadId;
    QPushButton *ACiudadBotonAgregar;

    void setupUi(QDialog *AgregarCiudad)
    {
        if (AgregarCiudad->objectName().isEmpty())
            AgregarCiudad->setObjectName(QStringLiteral("AgregarCiudad"));
        AgregarCiudad->resize(400, 300);
        label = new QLabel(AgregarCiudad);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 30, 201, 41));
        label_2 = new QLabel(AgregarCiudad);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 120, 57, 15));
        label_3 = new QLabel(AgregarCiudad);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 160, 57, 15));
        ACiudadNombre = new QLineEdit(AgregarCiudad);
        ACiudadNombre->setObjectName(QStringLiteral("ACiudadNombre"));
        ACiudadNombre->setGeometry(QRect(130, 120, 181, 23));
        ACiudadId = new QLineEdit(AgregarCiudad);
        ACiudadId->setObjectName(QStringLiteral("ACiudadId"));
        ACiudadId->setGeometry(QRect(130, 160, 181, 23));
        ACiudadBotonAgregar = new QPushButton(AgregarCiudad);
        ACiudadBotonAgregar->setObjectName(QStringLiteral("ACiudadBotonAgregar"));
        ACiudadBotonAgregar->setGeometry(QRect(160, 230, 80, 23));

        retranslateUi(AgregarCiudad);

        QMetaObject::connectSlotsByName(AgregarCiudad);
    } // setupUi

    void retranslateUi(QDialog *AgregarCiudad)
    {
        AgregarCiudad->setWindowTitle(QApplication::translate("AgregarCiudad", "Agregar Ciudad", 0));
        label->setText(QApplication::translate("AgregarCiudad", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Agregar Ciudad</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("AgregarCiudad", "Nombre", 0));
        label_3->setText(QApplication::translate("AgregarCiudad", "ID", 0));
        ACiudadBotonAgregar->setText(QApplication::translate("AgregarCiudad", "Agregar", 0));
    } // retranslateUi

};

namespace Ui {
    class AgregarCiudad: public Ui_AgregarCiudad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARCIUDAD_H
