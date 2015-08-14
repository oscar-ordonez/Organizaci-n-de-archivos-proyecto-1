#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Item{
	char name[20];
	int id;
};

ostream& operator << (ostream& output, const Item& item){
	output << item.name << "\t" << item.id << "\t" << endl;
	return output;
}

istream& operator >> (istream& input, Item& item){
	input >> item.name >> item.id;
	return input;
}

void leer() { // Leer archivo Binario
	int cont;
	Item item;
	ifstream file("data.bin", ifstream::binary);
	while(file.read(reinterpret_cast<char*>(&item), sizeof(item))){
		
		cout << item << endl;
	}
	
	file.close();
}

void escribir () { // escribir Archivo Binario
	int cont;
	Item item;
	ofstream file ("data.bin", ofstream::binary);
	do{
		cout << "Producto ";
		cin >> item;
		file.write(reinterpret_cast<const char*> (&item),sizeof(item));
		cout << "Continuar? ";
		cin >> cont;
	}while(cont);
	file.close();
}

int main (int argc, char const *argv[]){
	//Menu
	int opcion;
	cout << "MENU \n\t1. Generar datos\n\t2. Ver Datos\n\t3. Salir" << endl;
	cin >> opcion;
	while(opcion < 3){
		if(opcion == 1){
			vector <string> vectorNombres;
			vector <string> vectorNumeros;
			vector <string> vectorNombresNumeros;
			//*******Generar nombres con numeros**********
			//leer nombres
			FILE *fp;
			char *c, cadena[100];

			fp = fopen("Nombres","r");

			while(c = fgets(cadena,100,fp)){
				vectorNombres.push_back(cadena);	
			}

			//leer numeros
			fp = fopen("Numeros","r");

			while(c = fgets(cadena,100,fp)){
				vectorNumeros.push_back(cadena);
			}
			
			//unir numeros y personas
			int cont1 = 0;//contador de nombres
			int cont2 = 0;//contador de numero1
			int cont3 = 1;//contador de numero2
			int cont4 = 0;//contador de numeros general
			for (int i = 0; i < vectorNombres.size(); ++i) {
				if(i<250){
					vectorNombresNumeros.push_back(
						vectorNombres[cont1] + "\t" + vectorNumeros[cont2] + "," + vectorNumeros[cont3]);
					cont1++;
					cont2+= 2;
					cont4++;
					cont3+= 2;
					cont4++;
				}
				if(i > 250){
					vectorNombresNumeros.push_back(vectorNombres[cont1-1] + "\t" + vectorNumeros[cont3-2]);
					cont1++;
					cont3++;
				}
			}
			
		}
		if(opcion == 2){

		}
		cout << "MENU \n\t1. Generar datos\n\t2. Ver Datos\n\t3. Salir" << endl;
		cin >> opcion;	
	}

	return 0;
}
