#include "telefono.h"
#include <cstring>
using namespaces std;

telefono::telefono(string id,char[] numeroTelefono){

}
		
//get y set telefono
void telefono::setNumeroTelefono(char* numeroTelefono){

	this -> numeroTelefono = numeroTelefono;

}
char* telefono::getNumeroTelefono(){

	return numeroTelefono;

}

//get y set id
void telefono::setId(string id){

	this -> id = id;

}
string telefono::getId(){

	return id;

}