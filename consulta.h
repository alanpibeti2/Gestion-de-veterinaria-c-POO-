#ifndef CONSULTA_H
#define CONSULTA_H

#include "definiciones.h"
#include "Dtfecha.h"
#include <string>

class Consulta{
	private:
		DtFecha* fechaConsulta;
		string motivo;
	public:
		Consulta(DtFecha*,string);
		~Consulta();
		DtFecha* getFechaConsulta();
		string getMotivo();
		
};

#endif 
