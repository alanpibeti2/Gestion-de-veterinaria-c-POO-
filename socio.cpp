//Programacion avanzada - curso 2025
//
#include <iostream>
#include <string.h>
#include "Dtfecha.h"
#include "mascota.h"
#include "consulta.h"
#include "socio.h"
#include "definiciones.h"

Socio::Socio(string unaCi,string unNombre,DtFecha* dtfecha){

	ci=unaCi;
	nombre=unNombre;
	fechaIngreso=dtfecha;
	topeMascota=0;
	topeConsulta=0;
}

Socio::~Socio(){

	for(int j=0;j<topeMascota;j++){
		
		delete Mascotas[j];
		
	}
	for(int j=0;j<topeConsulta;j++){
		
		delete Consultas[j];
		
	}

}

string Socio::getCi(){
	return ci;
}
void Socio::masMascota(Mascota* mascota){

	Mascotas[topeMascota]=mascota;
	topeMascota++;
}
void Socio::masConsulta(Consulta* consulta){

	Consultas[topeConsulta]=consulta;
	topeConsulta++;
}
Mascota* Socio::getMascota(int iter){

	return Mascotas[iter];
}
Consulta* Socio::getConsulta(int iter){

	return Consultas[iter];
}
int Socio::getTopeMascota(){

	return topeMascota;
}
int Socio::getTopeConsulta(){

	return topeConsulta;
}









