/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionBuscar;
    QAction *actionVisualizar;
    QAction *actionExit;
    QAction *actionAgregarCiudad;
    QAction *actionAgregarCliente;
    QAction *actionAgregarLinea_del_Cliente;
    QAction *actionAgregarLlamada;
    QAction *actionModificarCiudad;
    QAction *actionModificarCliente;
    QAction *actionModificarLinea_del_Cliente;
    QAction *actionEliminarCiudad;
    QAction *actionEliminarCliente;
    QAction *actionEliminarLinea_del_Cliente;
    QAction *actionEliminarLlamada;
    QWidget *centralWidget;
    QTextEdit *llenado;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAgregar;
    QMenu *menuModificar;
    QMenu *menuEliminar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(617, 386);
        actionBuscar = new QAction(MainWindow);
        actionBuscar->setObjectName(QStringLiteral("actionBuscar"));
        actionVisualizar = new QAction(MainWindow);
        actionVisualizar->setObjectName(QStringLiteral("actionVisualizar"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAgregarCiudad = new QAction(MainWindow);
        actionAgregarCiudad->setObjectName(QStringLiteral("actionAgregarCiudad"));
        actionAgregarCliente = new QAction(MainWindow);
        actionAgregarCliente->setObjectName(QStringLiteral("actionAgregarCliente"));
        actionAgregarLinea_del_Cliente = new QAction(MainWindow);
        actionAgregarLinea_del_Cliente->setObjectName(QStringLiteral("actionAgregarLinea_del_Cliente"));
        actionAgregarLlamada = new QAction(MainWindow);
        actionAgregarLlamada->setObjectName(QStringLiteral("actionAgregarLlamada"));
        actionModificarCiudad = new QAction(MainWindow);
        actionModificarCiudad->setObjectName(QStringLiteral("actionModificarCiudad"));
        actionModificarCliente = new QAction(MainWindow);
        actionModificarCliente->setObjectName(QStringLiteral("actionModificarCliente"));
        actionModificarLinea_del_Cliente = new QAction(MainWindow);
        actionModificarLinea_del_Cliente->setObjectName(QStringLiteral("actionModificarLinea_del_Cliente"));
        actionEliminarCiudad = new QAction(MainWindow);
        actionEliminarCiudad->setObjectName(QStringLiteral("actionEliminarCiudad"));
        actionEliminarCliente = new QAction(MainWindow);
        actionEliminarCliente->setObjectName(QStringLiteral("actionEliminarCliente"));
        actionEliminarLinea_del_Cliente = new QAction(MainWindow);
        actionEliminarLinea_del_Cliente->setObjectName(QStringLiteral("actionEliminarLinea_del_Cliente"));
        actionEliminarLlamada = new QAction(MainWindow);
        actionEliminarLlamada->setObjectName(QStringLiteral("actionEliminarLlamada"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        llenado = new QTextEdit(centralWidget);
        llenado->setObjectName(QStringLiteral("llenado"));
        llenado->setGeometry(QRect(10, 10, 591, 271));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 300, 91, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 617, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAgregar = new QMenu(menuFile);
        menuAgregar->setObjectName(QStringLiteral("menuAgregar"));
        menuModificar = new QMenu(menuFile);
        menuModificar->setObjectName(QStringLiteral("menuModificar"));
        menuEliminar = new QMenu(menuFile);
        menuEliminar->setObjectName(QStringLiteral("menuEliminar"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(menuAgregar->menuAction());
        menuFile->addAction(menuModificar->menuAction());
        menuFile->addAction(menuEliminar->menuAction());
        menuFile->addAction(actionBuscar);
        menuFile->addAction(actionVisualizar);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuAgregar->addAction(actionAgregarCiudad);
        menuAgregar->addAction(actionAgregarCliente);
        menuAgregar->addAction(actionAgregarLinea_del_Cliente);
        menuAgregar->addAction(actionAgregarLlamada);
        menuModificar->addAction(actionModificarCiudad);
        menuModificar->addAction(actionModificarCliente);
        menuModificar->addAction(actionModificarLinea_del_Cliente);
        menuEliminar->addSeparator();
        menuEliminar->addAction(actionEliminarCiudad);
        menuEliminar->addAction(actionEliminarCliente);
        menuEliminar->addAction(actionEliminarLinea_del_Cliente);
        menuEliminar->addAction(actionEliminarLlamada);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionBuscar->setText(QApplication::translate("MainWindow", "Buscar", 0));
        actionVisualizar->setText(QApplication::translate("MainWindow", "Visualizar", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAgregarCiudad->setText(QApplication::translate("MainWindow", "Ciudad", 0));
        actionAgregarCliente->setText(QApplication::translate("MainWindow", "Cliente", 0));
        actionAgregarLinea_del_Cliente->setText(QApplication::translate("MainWindow", "Linea del Cliente", 0));
        actionAgregarLlamada->setText(QApplication::translate("MainWindow", "Llamada", 0));
        actionModificarCiudad->setText(QApplication::translate("MainWindow", "Ciudad", 0));
        actionModificarCliente->setText(QApplication::translate("MainWindow", "Cliente", 0));
        actionModificarLinea_del_Cliente->setText(QApplication::translate("MainWindow", "Linea del Cliente", 0));
        actionEliminarCiudad->setText(QApplication::translate("MainWindow", "Ciudad", 0));
        actionEliminarCliente->setText(QApplication::translate("MainWindow", "Cliente", 0));
        actionEliminarLinea_del_Cliente->setText(QApplication::translate("MainWindow", "Linea del Cliente", 0));
        actionEliminarLlamada->setText(QApplication::translate("MainWindow", "Llamada", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Cargar Datos", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuAgregar->setTitle(QApplication::translate("MainWindow", "Agregar", 0));
        menuModificar->setTitle(QApplication::translate("MainWindow", "Modificar", 0));
        menuEliminar->setTitle(QApplication::translate("MainWindow", "Eliminar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
