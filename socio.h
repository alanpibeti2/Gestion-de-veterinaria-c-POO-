#ifndef SOCIO_H
#define SOCIO_H

#include "definiciones.h"
#include "Dtfecha.h"
#include <string>
#include "mascota.h"
#include "consulta.h"

class Socio{
	private:
		string ci;
		string nombre;
		DtFecha* fechaIngreso;
		Mascota* Mascotas[MAX_MASCOTA];
		int topeMascota;
		Consulta* Consultas[MAX_CONSULTA];
		int topeConsulta;
	public:
		Socio(string,string,DtFecha*);
		~Socio();	
		string getCi();	
		void masMascota(Mascota*);
		void masConsulta(Consulta* consulta);
		Mascota* getMascota(int);
		Consulta* getConsulta(int);
		int getTopeMascota();
		int getTopeConsulta();
				
};

#endif 
