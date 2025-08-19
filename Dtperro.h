#ifndef DTPERRO_H
#define DTPERRO_H

#include "definiciones.h"
#include "Dtmascota.h"

class DtPerro : public DtMascota {
	private:
		RazaPerro raza;
		bool vacunaCachorro;
	public:
		
		DtPerro(string,Genero,float,RazaPerro,bool);
		DtPerro(string,Genero,float,float,RazaPerro,bool);
		~DtPerro();
		void setRaza(RazaPerro);
		void setVacunaCachorro(bool);
		RazaPerro getRaza();
		bool getVacunaCachorro();
		void imprimirDatos();
		string tipoMascota();
};


#endif 
