/********************************************************************************
** Form generated from reading UI file 'agregarllamada.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARLLAMADA_H
#define UI_AGREGARLLAMADA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AgregarLlamada
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *ALlamadaNumero;
    QLabel *label_3;
    QDateTimeEdit *ALlamadaInicio;
    QDateTimeEdit *ALlamadaFinal;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *ALlamadaDestino;
    QPushButton *ALlamadaBotonAgregar;

    void setupUi(QDialog *AgregarLlamada)
    {
        if (AgregarLlamada->objectName().isEmpty())
            AgregarLlamada->setObjectName(QStringLiteral("AgregarLlamada"));
        AgregarLlamada->resize(400, 300);
        label = new QLabel(AgregarLlamada);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 201, 51));
        label_2 = new QLabel(AgregarLlamada);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 90, 57, 15));
        ALlamadaNumero = new QComboBox(AgregarLlamada);
        ALlamadaNumero->setObjectName(QStringLiteral("ALlamadaNumero"));
        ALlamadaNumero->setGeometry(QRect(130, 90, 221, 23));
        label_3 = new QLabel(AgregarLlamada);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 130, 57, 15));
        ALlamadaInicio = new QDateTimeEdit(AgregarLlamada);
        ALlamadaInicio->setObjectName(QStringLiteral("ALlamadaInicio"));
        ALlamadaInicio->setGeometry(QRect(130, 130, 194, 24));
        ALlamadaFinal = new QDateTimeEdit(AgregarLlamada);
        ALlamadaFinal->setObjectName(QStringLiteral("ALlamadaFinal"));
        ALlamadaFinal->setGeometry(QRect(130, 170, 194, 24));
        label_4 = new QLabel(AgregarLlamada);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 170, 57, 15));
        label_5 = new QLabel(AgregarLlamada);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 210, 57, 15));
        ALlamadaDestino = new QLineEdit(AgregarLlamada);
        ALlamadaDestino->setObjectName(QStringLiteral("ALlamadaDestino"));
        ALlamadaDestino->setGeometry(QRect(130, 210, 221, 23));
        ALlamadaBotonAgregar = new QPushButton(AgregarLlamada);
        ALlamadaBotonAgregar->setObjectName(QStringLiteral("ALlamadaBotonAgregar"));
        ALlamadaBotonAgregar->setGeometry(QRect(170, 250, 80, 23));

        retranslateUi(AgregarLlamada);

        QMetaObject::connectSlotsByName(AgregarLlamada);
    } // setupUi

    void retranslateUi(QDialog *AgregarLlamada)
    {
        AgregarLlamada->setWindowTitle(QApplication::translate("AgregarLlamada", "Dialog", 0));
        label->setText(QApplication::translate("AgregarLlamada", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Agregar Llamada</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("AgregarLlamada", "Numero", 0));
        label_3->setText(QApplication::translate("AgregarLlamada", "Inicio", 0));
        label_4->setText(QApplication::translate("AgregarLlamada", "Final", 0));
        label_5->setText(QApplication::translate("AgregarLlamada", "Destino", 0));
        ALlamadaBotonAgregar->setText(QApplication::translate("AgregarLlamada", "Agregar", 0));
    } // retranslateUi

};

namespace Ui {
    class AgregarLlamada: public Ui_AgregarLlamada {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARLLAMADA_H
