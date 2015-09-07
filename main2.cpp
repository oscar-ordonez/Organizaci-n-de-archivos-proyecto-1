#include <iostream>
#include "persona.h"
#include "telefono.h"
#include "ciudad.h"
#include "registros.h"
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <string.h>
#include <fstream>
#include <vector>
#include <cstring>




using namespace std;

//declaracion de metodos

void convertirPersonas();

int main(int argc, char* argv[]){
	
	int respuestaContinuar;
	do{
		cout << "Menu" << endl << "1. Pasar Archivos a binario"
			 << endl << "2. Salir" << endl;
		cin >> respuestaContinuar;

		//Pasar Archivo a binario
		if(respuestaContinuar == 1){
			convertirPersonas();
		}

	}while(respuestaContinuar != 2);
	return 0;

}

//metodos
void convertirPersonas(){
	//archivo texto
	ifstream archivo("personas.txt");
	//archivo binario
	ofstream archivoBinario("personas.bin");
	/*int rrn = -1;
	bool bandera = 0;
	int recorriendo = 0;

	archivoBinario.write(reinterpret_cast <char*> (&rrn), sizeof(int));
	archivoBinario.write(reinterpret_cast <char*> (recorriendo), sizeof(int));
	archivoBinario.write(reinterpret_cast <char*> (&bandera), sizeof(bool));
	while(true){
	*/	while(!archivo.eof()){
			//break;
		
		
		//persona cliente;
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

		/*recorriendo ++;

		archivoBinario.seekp (sizeof(rrn));
  		archivoBinario.write(reinterpret_cast<char*>(&recorriendo), sizeof(recorriendo));
  		archivoBinario.seekp(sizeof(int)*2 +1 +(recorriendo*60));
		*/
	}

	archivo.close();
	archivoBinario.close();
	ifstream leerArchivo("personas.bin",ios::binary);
	leerArchivo.seekg(0);
	while(!leerArchivo.eof()){
		char id[15];
		char nombre[40];
		char genero[2];
		char IdCiudad[6];
		leerArchivo.read((char*)id, sizeof(id));
		leerArchivo.read((char*)nombre, sizeof(nombre));
		leerArchivo.read((char*)genero, sizeof(genero));
		leerArchivo.read((char*)IdCiudad, sizeof(IdCiudad));
		cout <<id << "\t" << nombre << "\t" << genero << "\t" << IdCiudad <<endl;

	}
	leerArchivo.close();

}