/********************************************************************************
** Form generated from reading UI file 'agregarcliente.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARCLIENTE_H
#define UI_AGREGARCLIENTE_H

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

class Ui_AgregarCliente
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *AClienteId;
    QLineEdit *AClienteNombre;
    QLineEdit *AClienteApellido;
    QRadioButton *AClienteF;
    QRadioButton *AClienteM;
    QComboBox *AClienteIdCiudad;
    QPushButton *AClienteBotonAgregar;

    void setupUi(QDialog *AgregarCliente)
    {
        if (AgregarCliente->objectName().isEmpty())
            AgregarCliente->setObjectName(QStringLiteral("AgregarCliente"));
        AgregarCliente->resize(400, 300);
        label = new QLabel(AgregarCliente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 191, 31));
        label_2 = new QLabel(AgregarCliente);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 80, 57, 15));
        label_3 = new QLabel(AgregarCliente);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 110, 57, 15));
        label_4 = new QLabel(AgregarCliente);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 140, 57, 15));
        label_5 = new QLabel(AgregarCliente);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 170, 57, 15));
        label_6 = new QLabel(AgregarCliente);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 200, 61, 16));
        AClienteId = new QLineEdit(AgregarCliente);
        AClienteId->setObjectName(QStringLiteral("AClienteId"));
        AClienteId->setGeometry(QRect(110, 80, 191, 23));
        AClienteNombre = new QLineEdit(AgregarCliente);
        AClienteNombre->setObjectName(QStringLiteral("AClienteNombre"));
        AClienteNombre->setGeometry(QRect(110, 110, 191, 23));
        AClienteApellido = new QLineEdit(AgregarCliente);
        AClienteApellido->setObjectName(QStringLiteral("AClienteApellido"));
        AClienteApellido->setGeometry(QRect(110, 140, 191, 23));
        AClienteF = new QRadioButton(AgregarCliente);
        AClienteF->setObjectName(QStringLiteral("AClienteF"));
        AClienteF->setGeometry(QRect(140, 170, 100, 21));
        AClienteM = new QRadioButton(AgregarCliente);
        AClienteM->setObjectName(QStringLiteral("AClienteM"));
        AClienteM->setGeometry(QRect(210, 170, 100, 21));
        AClienteIdCiudad = new QComboBox(AgregarCliente);
        AClienteIdCiudad->setObjectName(QStringLiteral("AClienteIdCiudad"));
        AClienteIdCiudad->setGeometry(QRect(110, 200, 191, 23));
        AClienteBotonAgregar = new QPushButton(AgregarCliente);
        AClienteBotonAgregar->setObjectName(QStringLiteral("AClienteBotonAgregar"));
        AClienteBotonAgregar->setGeometry(QRect(160, 250, 80, 23));

        retranslateUi(AgregarCliente);

        QMetaObject::connectSlotsByName(AgregarCliente);
    } // setupUi

    void retranslateUi(QDialog *AgregarCliente)
    {
        AgregarCliente->setWindowTitle(QApplication::translate("AgregarCliente", "Dialog", 0));
        label->setText(QApplication::translate("AgregarCliente", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Agregar Cliente</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("AgregarCliente", "ID", 0));
        label_3->setText(QApplication::translate("AgregarCliente", "Nombre", 0));
        label_4->setText(QApplication::translate("AgregarCliente", "Apellido", 0));
        label_5->setText(QApplication::translate("AgregarCliente", "Genero", 0));
        label_6->setText(QApplication::translate("AgregarCliente", "ID Ciudad", 0));
        AClienteF->setText(QApplication::translate("AgregarCliente", "F", 0));
        AClienteM->setText(QApplication::translate("AgregarCliente", "M", 0));
        AClienteBotonAgregar->setText(QApplication::translate("AgregarCliente", "Agregar", 0));
    } // retranslateUi

};

namespace Ui {
    class AgregarCliente: public Ui_AgregarCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARCLIENTE_H
