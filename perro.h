#ifndef PERRO_H
#define PERRO_H

#include "definiciones.h"
#include "mascota.h"


class Perro : public Mascota{
	private:
		RazaPerro raza;
		bool vacunaCachorro;
	public:
		
		Perro(string,Genero,float,RazaPerro,bool);
		~Perro();
		float obtenerRacionDiaria();
		string OtipoMascota();
		RazaPerro getRaza();
		bool getVacunaCachorro();
		
};

#endif 
