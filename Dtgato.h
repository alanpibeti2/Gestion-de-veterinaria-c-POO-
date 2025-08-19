#ifndef DTGATO_H
#define DTGATO_H

#include "definiciones.h"
#include "Dtmascota.h"

class DtGato : public DtMascota{
	private:
		TipoPelo tipoPelo;
	public:
	
		DtGato(string,Genero,float,TipoPelo);
		DtGato(string,Genero,float,float,TipoPelo);
		~DtGato();
		TipoPelo getTipoPelo();
		void imprimirDatos();
		string tipoMascota();
};


#endif 
