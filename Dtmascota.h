#ifndef DTMASCOTA_H
#define DTMASCOTA_H

#include "definiciones.h"
#include <string>

class DtMascota{
	protected:
		string nombre;
		Genero genero;
		float peso;
		float racionDiaria;
	public:
	 
	DtMascota(string,Genero,float);
	DtMascota(string,Genero,float,float); 
	~DtMascota(); 
	void setNombre(string);
	void setGenero(Genero);
	void setPeso(float);
	void setRacionDiaria(float);
	string getNombre();
	Genero getGenero();
	float getPeso();
	float getRacionDiaria();
	virtual string tipoMascota()=0;
	virtual void imprimirDatos()=0;
	
};

#endif 
