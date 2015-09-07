#ifndef TELEFONO_H
#define TELEFONO_H
#include <string.h>

using namespace std;

class telefono{
	
	protected:
		
		string id;
		char* numeroTelefono;
	
	public:

		telefono(string,char[]);
		
		//get y set telefono
		void setNumeroTelefono(char*);
		char* getNumeroTelefono();
		
		//get y set id
		void setId(string);
		string getId();

};

#endif
