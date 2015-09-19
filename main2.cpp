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

/*

			DECLARACION DE METODOS

*/
int posicionIndice(vector <string>, unsigned long);

void convertirPersonas();
void indexarPersonas();
void mostrarPersonas();

void convertirRegistros();

/*

			DECLARACION DE VARIABLES

*/
vector<string> llaveCliente;

int main(int argc, char* argv[]){
	
	int respuestaContinuar;
	do{
		cout << "Menu" << endl << "1. Pasar Archivos a binario e indexarlos"
			 << endl << "2. Salir" << endl;
		cin >> respuestaContinuar;

		//Pasar Archivo a binario
		if(respuestaContinuar == 1){
			convertirPersonas();
			indexarPersonas();
			cout << endl << "personas indexadas exitosamente" << endl;
			
			int op = 0;
			cout << endl << "continuar" << endl;
			cin >> 	op;
			if(op == 1){
				 mostrarPersonas();
			}		
			//convertirRegistros();
		}

	}while(respuestaContinuar != 2);
	return 0;

}

//metodos
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
void convertirPersonas(){
	//archivo texto
	ifstream archivo("personas.txt");
	//archivo binario
	ofstream archivoBinario("personas.bin");
	int rrn = -1;
	bool bandera = 0;
	int recorriendo = 0;
	char terminado;

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
		
		for(int i = 0; i < sizeof(id)-1; i++){
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

void mostrarPersonas(){
	int rrn=-1;
	int recorriendo = 0;
	int final = 0;
	bool bandera = 0;
	char id[15];
	char nombre[40];
	char genero[2];
	char ciudad[6];
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
			cout <<"----------------------------------------------------------------------------"<<endl;
			cout << "Id: " << id << endl;
			cout << "Nombre: " << nombre <<endl; 
			cout << "Genero: " << genero << endl;
			cout << "Id Ciudad: " << ciudad <<endl;
		}
		final++;

	}
	readFile.close();
}

void convertirRegistros () {
	ifstream archivo("registros.txt");
	ofstream archivoBinario("registros.bin");
	
	while(!archivo.eof()){	
		char numero[10];
		char numeroDestino[10];
		char fechaComienzo[20];//19
		char fechaTerminada[20];

		string numeroString = "";
		string numeroDestinoString = "";
		string fechaComienzoString = "";
		string fechaTerminadaString = "";

		getline(archivo, numeroString, '@');
		getline(archivo, fechaComienzoString, '@');
		getline(archivo, fechaTerminadaString, '@');
		getline(archivo, numeroDestinoString, '@');
		
		//numero
		for (int i = 0; i < 10; ++i) {
			numero[i] = numeroString[i];
		}

		//fecha Inicio
		for (int i = 0; i < 20; ++i) {
			fechaComienzo[i] = fechaComienzoString[i];
		}

		//fecha Termanda
		for (int i = 0; i < 20; ++i) {
			fechaTerminada[i] = fechaTerminadaString[i];
		}

		//numero Destino
		for (int i = 0; i < 10; ++i) {
			numeroDestino[i] = numeroDestinoString[i];
		}

		archivoBinario.write((char*)numero,sizeof(numero));
		archivoBinario.write((char*)fechaComienzo,sizeof(fechaComienzo));
		archivoBinario.write((char*)fechaTerminada,sizeof(fechaTerminada));	
		archivoBinario.write((char*)numeroDestino,sizeof(numeroDestino));
		
	}

	int opcionVisualizar = 0;
	cout << "Desea Ver Identidad\tNombre\tGenero\tCodigo Ciudad ? \n[si = 1/no = 0]" << endl;
	cin >> opcionVisualizar;

	if(opcionVisualizar = 1){
		archivo.close();
		archivoBinario.close();
		ifstream leerArchivo("registros.bin",ios::binary);
		leerArchivo.seekg(0);
		while(!leerArchivo.eof()){
			char numero[10];
			char numeroDestino[10];
			char fechaComienzo[20];
			char fechaTerminada[20];
			leerArchivo.read((char*)numero, sizeof(numero));
			leerArchivo.read((char*)fechaComienzo, sizeof(fechaComienzo));
			leerArchivo.read((char*)fechaTerminada, sizeof(fechaTerminada));
			leerArchivo.read((char*)numeroDestino, sizeof(numeroDestino));
			cout <<numero << " -> " << numeroDestino << "\t" << fechaComienzo << "\t" << fechaTerminada <<endl;
		}
		leerArchivo.close();
	}
}