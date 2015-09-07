#ifndef REGISTROS_H
#define REGISTROS_H
#include <string>
#include <cstring>

using namespace std;

class registros{

	protected:
		string numero;
		double inicio;
		double final;
		string idCiudad;

	public:
		registros (string, double, double, string);

		//get y set numero
		string getNumero ();
	    void setNumero (string Id);

	    //get y set inicio de la llamada
	    double getInicio ();
	    void setInicio (double final);

	    //get y set fin de la llamada
	    double getFinal ();
	    void setFinal (double inicio);

	    //get y set id ciudad
	    string setIdCiudad ();
	    void setIdCiudad (string idCiudad);

};

#endif