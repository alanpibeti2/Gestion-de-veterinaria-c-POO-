#ifndef DTFECHA_H
#define DTFECHA_H

#include "definiciones.h"

class DtFecha{
	private:
		int dia;
		int mes;
		int anio;
	public:
	DtFecha(int,int,int);
	DtFecha();
	~DtFecha();
	int getDia();
	int getMes();
	int getAnio();
	bool fechaEsAnterior(DtFecha*);//devuelve true si la fecha de la clase es anterior a la dada.
	void imprimirFecha();
};

#endif 
