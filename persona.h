#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class persona{

	protected:
		string id;
		char* nombre;
		string genero;
		string idCiudad;

	public:
		persona (string, char[], string, string);
		
		//get y set id
		void setId (string id);
		string getId ();

		//get y set nombre
		void setNombre (char* nombre);
		char* getNombre ();

		//get y set genero
		void setGenero (string generoo);
		string getGenero ();

		//get y set idCiudad
		void setIdCiudad (string idCiudad);
		string getIdCuidad ();
		
};

#endif