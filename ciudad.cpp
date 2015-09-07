#include "ciudad.h"
#include <cstring>

using namespace std;

Ciudad::Ciudad (string idCiudad,char nombre[]):idCiudad(idCiudad),nombre(nombre){

}

//get y set nombre
char* Ciudad::getNombre (){

	return nombre;

}
void Ciudad::setNombre (char* nombre){

	this -> nombre = nombre;

}

//get y set id ciudad
string Ciudad::getidCiudad (){

	return idCiudad;

}
void Ciudad::setidCiudad (string idCiudad){

	this -> idCiudad = idCiudad;

}