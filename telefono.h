#ifndef TELEFONO_H
#define TELEFONO_H
<<<<<<< HEAD
#include <string.h>

=======
#include <cstring>
>>>>>>> fd57fd809328636a6ce63543a8609c4384fbecba
using namespace std;

class telefono{
	
	protected:
		
		string id;
<<<<<<< HEAD
		char* numeroTelefono;
	
	public:

		telefono(string,char[]);
=======
		char* tel;
	public:
		telefono(string, char[]);
>>>>>>> fd57fd809328636a6ce63543a8609c4384fbecba
		
		//get y set telefono
		void setNumeroTelefono(char*);
		char* getNumeroTelefono();
		
		//get y set id
		void setId(string);
		string getId();

};

#endif
