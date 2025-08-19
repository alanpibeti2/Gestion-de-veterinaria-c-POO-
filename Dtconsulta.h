#ifndef DTCONSULTA_H
#define DTCONSULTA_H

#include "definiciones.h"
#include "Dtfecha.h"
#include <string>

class DtConsulta{
	private:
		DtFecha* fechaConsulta;
		string motivo;
	public:
	DtConsulta(DtFecha*,string);
	~DtConsulta();
	DtFecha* getFecha();
	string getMotivo();
	void imprimirConsulta();
};



#endif 
