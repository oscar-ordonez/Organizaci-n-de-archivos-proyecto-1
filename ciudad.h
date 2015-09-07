#ifndef CIUDAD_H
#define CIUDAD_H
#include <string>

using namespace std;

class Ciudad{

	string idCiudad;
	char* nombre; 

	public:
		Ciudad (string, char[]);

		//get y set nombre
		char* getNombre ();
		void setNombre (char*);

		//get y set id ciudad 
		string getidCiudad ();
		void setidCiudad (string);

};

#endif