#ifndef MASCOTA_H
#define MASCOTA_H

#include "definiciones.h"

class Mascota{
	protected:
		string nombre;
		Genero genero;
		float peso;
	public:
		
		virtual float obtenerRacionDiaria()=0;
		Mascota(string,Genero,float);
		~Mascota();
		virtual string OtipoMascota()=0;
		string getNombre();
		Genero getGenero();
		float getPeso();
};

#endif 
