/********************************************************************************
** Form generated from reading UI file 'eliminarciudad.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINARCIUDAD_H
#define UI_ELIMINARCIUDAD_H

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

class Ui_EliminarCiudad
{
public:
    QLabel *label;
    QComboBox *ECiudadCiudad;
    QLabel *label_2;
    QPushButton *ECiudadBotonEliminar;

    void setupUi(QDialog *EliminarCiudad)
    {
        if (EliminarCiudad->objectName().isEmpty())
            EliminarCiudad->setObjectName(QStringLiteral("EliminarCiudad"));
        EliminarCiudad->resize(400, 300);
        label = new QLabel(EliminarCiudad);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 30, 191, 31));
        ECiudadCiudad = new QComboBox(EliminarCiudad);
        ECiudadCiudad->setObjectName(QStringLiteral("ECiudadCiudad"));
        ECiudadCiudad->setGeometry(QRect(130, 120, 201, 23));
        label_2 = new QLabel(EliminarCiudad);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 120, 57, 15));
        ECiudadBotonEliminar = new QPushButton(EliminarCiudad);
        ECiudadBotonEliminar->setObjectName(QStringLiteral("ECiudadBotonEliminar"));
        ECiudadBotonEliminar->setGeometry(QRect(150, 190, 80, 23));

        retranslateUi(EliminarCiudad);

        QMetaObject::connectSlotsByName(EliminarCiudad);
    } // setupUi

    void retranslateUi(QDialog *EliminarCiudad)
    {
        EliminarCiudad->setWindowTitle(QApplication::translate("EliminarCiudad", "Dialog", 0));
        label->setText(QApplication::translate("EliminarCiudad", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Eliminar Ciudad</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("EliminarCiudad", "Ciudad", 0));
        ECiudadBotonEliminar->setText(QApplication::translate("EliminarCiudad", "Eliminar", 0));
    } // retranslateUi

};

namespace Ui {
    class EliminarCiudad: public Ui_EliminarCiudad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINARCIUDAD_H
