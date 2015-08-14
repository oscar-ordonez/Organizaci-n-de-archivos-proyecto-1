#include <iostream>
#include <stdio.h>
#include <fstream>
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

void leer() {

}

void escribir () {
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
	escribir();	

	return 0;
}
