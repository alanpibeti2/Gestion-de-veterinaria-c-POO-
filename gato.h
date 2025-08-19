#ifndef GATO_H
#define GATO_H

#include "definiciones.h"
#include "mascota.h"

class Gato : public Mascota{
	private:
		TipoPelo tipoPelo;
	public:
		
		Gato(string,Genero,float,TipoPelo);
		~Gato();
		float obtenerRacionDiaria();
		string OtipoMascota();
		TipoPelo getTipoPelo();
};

#endif 
