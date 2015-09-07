#ifndef TELEFONO_H
#define TELEFONO_H

using namespace std;

class telefono{
	
	protected:
		string id;
		char* telefono;
	public:
		telefono(string,char[]);
		
		//get y set telefono
		void setTelefono(char*);
		char* getTelefono();
		
		//get y set id
		void setId(char*);
		string getId();

};

#endif
