#include "registros.h"
#include <iostream>
#include <string.h>

using namespace std;
    
registros::registros (string numero, double inicio, double fin, string idCiudad){
    
    this -> numero = numero;
    this -> inicio = inicio;
    this -> fin = fin;
    this -> idCiudad = idCiudad;

}

//get y set numero
string registros::getNumero (){

    return numero;

}
void registros::setNumero (string numero){

    this -> numero = numero;

}

//get y set inicio de la llamada
double registros::getInicio (){

    return inicio;

}
void registros::setInicio (double inicio){

    this -> inicio = inicio;

}

//get y set fin de la llamada
double registros::getFin (){

    return fin;

}
void registros::setFin (double fin){

    this -> fin = fin;

}

//get y set id ciudad
string registros::setIdCiudad (){

    return idCiudad;

}
void registros::setIdCiudad (string idCiudad){

    this -> idCiudad = idCiudad;

}