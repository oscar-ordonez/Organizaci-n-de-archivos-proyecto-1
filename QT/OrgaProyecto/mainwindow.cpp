#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "agregarciudad.h"
#include "agregarcliente.h"
#include "agregarlineas_de_cliente.h"
#include "agregarllamada.h"
#include "modificarciudad.h"
#include "modificarcliente.h"
#include "modificarlinea_de_cliente.h"
#include "eliminarciudad.h"
#include "eliminarcliente.h"
#include "eliminarlinea_de_cliente.h"
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <string.h>
#include <fstream>
#include <vector>
#include <cstring>
#include <iostream>

using namespace std;

int posicionIndice(vector <string>, unsigned long);

void convertirPersonas();
void indexarPersonas();
void mostrarPersonas();
void convertirRegistros();

QString concatenar;
vector<string> llaveCliente;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    convertirPersonas();
    indexarPersonas();
    mostrarPersonas();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    exit(0);
}

void MainWindow::on_actionAgregarCiudad_triggered()
{
    AgregarCiudad agregarCiudad;
    agregarCiudad.setModal(true);
    agregarCiudad.exec();
}

void MainWindow::on_actionAgregarCliente_triggered()
{
    AgregarCliente agregarCliente;
    agregarCliente.setModal(true);
    agregarCliente.exec();
}

void MainWindow::on_actionAgregarLinea_del_Cliente_triggered()
{
    AgregarLineas_de_Cliente agregarLinea_del_cliente;
    agregarLinea_del_cliente.setModal(true);
    agregarLinea_del_cliente.exec();
}

void MainWindow::on_actionAgregarLlamada_triggered()
{
    AgregarLlamada agregarLlamada;
    agregarLlamada.setModal(true);
    agregarLlamada.exec();
}

void MainWindow::on_actionModificarCiudad_triggered()
{
    ModificarCiudad modificarCiudad;
    modificarCiudad.setModal(true);
    modificarCiudad.exec();
}

void MainWindow::on_actionModificarCliente_triggered()
{
    ModificarCliente modificarCliente;
    modificarCliente.setModal(true);
    modificarCliente.exec();
}

void MainWindow::on_actionModificarLinea_del_Cliente_triggered()
{
    ModificarLinea_de_Cliente modificarLinea_de_cliente;
    modificarLinea_de_cliente.setModal(true);
    modificarLinea_de_cliente.exec();
}

void MainWindow::on_actionEliminarCiudad_triggered()
{
    EliminarCiudad eliminarCiudad;
    eliminarCiudad.setModal(true);
    eliminarCiudad.exec();
}

void MainWindow::on_actionEliminarCliente_triggered()
{
    EliminarCliente eliminarCliente;
    eliminarCliente.setModal(true);
    eliminarCliente.exec();
}

void MainWindow::on_actionEliminarLinea_del_Cliente_triggered()
{
    EliminarLinea_de_Cliente eliminarLinea_de_cliente;
    eliminarLinea_de_cliente.setModal(true);
    eliminarLinea_de_cliente.exec();
}

void MainWindow::on_actionEliminarLlamada_triggered()
{

}

void convertirPersonas(){
    //archivo texto
    ifstream archivo("personas.txt");
    //archivo binario
    ofstream archivoBinario("personas.bin");
    int rrn = -1;
    bool bandera = 0;
    int recorriendo = 0;

    archivoBinario.write(reinterpret_cast <char*> (&rrn), sizeof(int));
    archivoBinario.write(reinterpret_cast <char*> (&recorriendo), sizeof(int));
    archivoBinario.write(reinterpret_cast <char*> (&bandera), sizeof(bool));
    while(true){
        if(archivo.eof()){
            break;
        }
        char id[15];
        char nombre[40];
        char genero[2];
        char idCiudad[6];

        string idString = "";
        string nombreString = "";
        string generoString = "";
        string idCiudadString = "";

        getline(archivo, idString, '@');
        getline(archivo, nombreString, '@');
        getline(archivo, generoString, '@');
        getline(archivo, idCiudadString, '@');

        //identidad
        for (int i = 0; i < 15; ++i) {
            id[i] = idString[i];
        }

        //nombre
        for (int i = 0; i < 40; ++i) {
            nombre[i] = nombreString[i];
        }

        //genero
        for (int i = 0; i < 2; ++i) {
            genero[i] = generoString[i];
        }

        //codigo de la ciudad
        for (int i = 0; i < 6; ++i) {
            idCiudad[i] = idCiudadString[i];
        }

        archivoBinario.write((char*)id,sizeof(id));
        archivoBinario.write((char*)nombre,sizeof(nombre));
        archivoBinario.write((char*)genero,sizeof(genero));
        archivoBinario.write((char*)idCiudad,sizeof(idCiudad));

        recorriendo ++;
        archivoBinario.seekp (sizeof(rrn));
        archivoBinario.write(reinterpret_cast<char*>(&recorriendo), sizeof(recorriendo));
        archivoBinario.seekp(sizeof(int)*2 + 1 + (recorriendo*63));
    }
    // Visualizar el contenido
    archivo.close();
    archivoBinario.close();
}

void indexarPersonas(){
    llaveCliente.clear();
    llaveCliente.clear();
    int contador = 0;
    ifstream leerArchivo("personas.bin",ios::binary);
    leerArchivo.seekg(sizeof(int) + sizeof(int) + sizeof(bool));

    while(true){
        stringstream rrn;
        if(leerArchivo.eof()){
            break;
        }

        char id[15];
        char nombre[40];
        char genero[2];
        char IdCiudad[6];

        leerArchivo.read((char*)id, sizeof(id));
        leerArchivo.read((char*)nombre, sizeof(nombre));
        leerArchivo.read((char*)genero, sizeof(genero));
        leerArchivo.read((char*)IdCiudad, sizeof(IdCiudad));

        bool comparar = false;

        for(int i = 0; i < (sizeof(id)-1); i++){
            if(id[i] == '*'){
                comparar = true;
                break;
            }
        }

        if(!comparar){
            stringstream cadena;
            for (int i = 0; i < sizeof(id); ++i){
                cadena << id[i];
            }

            rrn << contador;

            unsigned long llave = atol(cadena.str().c_str());
            int posicion = posicionIndice(llaveCliente,llave);
        }
    }
}
int posicionIndice(vector <string> llaveIndice, unsigned long llave){
    int primero = 0;
    int ultimo = llaveIndice.size()-1;
    int medio;
    bool bandera = false;

    while(true){
        if(primero > ultimo)
            break;
        medio = (primero + ultimo)/2;

        if(llave == atol((llaveIndice.at(medio)).c_str())){
            return medio;
        }

        if(llave > atol((llaveIndice.at(medio)).c_str())){
            if(medio != llaveIndice.size() - 1){
                if(llave < atol((llaveIndice.at(medio+1)).c_str())){
                    return medio+1;
                }else{
                    if(bandera && medio == llaveIndice.size()-2)
                        return -1;
                    primero = medio;
                    bandera = true;
                }
            }else{
                if(llave < atol((llaveIndice.at(medio)).c_str())){
                    return medio;
                }else{
                    return -1;
                }

            }
        }else{
            if(medio != 0){
                if(llave > atol((llaveIndice.at(medio-1)).c_str())){
                    return medio;
                }else{
                    ultimo = medio;
                }
            }else{
                if(llave < atol((llaveIndice.at(medio)).c_str())){
                    return medio;
                }else{
                    return medio+1;
                }
            }
        }
    }
    return -1;
}
void mostrarPersonas(){
    int rrn=-1;
    int recorriendo = 0;
    int final = 0;
    bool bandera = 0;
    char id[15];
    char nombre[40];
    char genero[2];
    char ciudad[6];
    concatenar = "";
    ifstream readFile("personas.bin",ios::binary);
    readFile.read( reinterpret_cast<char*>(&rrn), sizeof(int) );
    readFile.read( reinterpret_cast<char*>(&recorriendo), sizeof(int) );
    readFile.read( reinterpret_cast<char*>(&bandera), sizeof(bool)  );
    readFile.seekg(sizeof(int)+sizeof(int)+sizeof(bool));
    while(final < recorriendo){
        /*if(readFile.eof())
            break;*/
        readFile.read((char*)id, sizeof(id));
        readFile.read((char*)nombre, sizeof(nombre));
        readFile.read((char*)genero, sizeof(genero));
        readFile.read((char*)ciudad, sizeof(ciudad));
        if( id[0] != '*'){
            concatenar += "\n-------------------------------------";
            concatenar += "\nId: ";
            concatenar += id;
            concatenar += "\nNombre: ";
            concatenar += nombre;
            concatenar += "\nGenero: ";
            concatenar += genero;
            concatenar += "\nIdCiudad: ";
            concatenar += ciudad;
        }
        final++;

    }
    readFile.close();
}

void MainWindow::on_pushButton_clicked()
{
    QTextEdit llenado;
    QTextCursor pre_cursor = ui->llenado->textCursor();
    ui->llenado->moveCursor (QTextCursor::End);
    ui->llenado->insertPlainText(concatenar);
    ui->llenado->setTextCursor (ui->llenado->textCursor());
}
