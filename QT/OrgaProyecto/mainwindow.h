#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_actionAgregarCiudad_triggered();

    void on_actionAgregarCliente_triggered();

    void on_actionAgregarLinea_del_Cliente_triggered();

    void on_actionAgregarLlamada_triggered();

    void on_actionModificarCiudad_triggered();

    void on_actionModificarCliente_triggered();

    void on_actionModificarLinea_del_Cliente_triggered();

    void on_actionEliminarCiudad_triggered();

    void on_actionEliminarCliente_triggered();

    void on_actionEliminarLinea_del_Cliente_triggered();

    void on_actionEliminarLlamada_triggered();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
