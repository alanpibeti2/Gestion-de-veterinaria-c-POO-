#include <iostream>
#include "definiciones.h"
#include <string>	
#include "Dtmascota.h"

DtMascota::DtMascota(string nom,Genero gen,float pes){

	nombre=nom;
	genero=gen;
	peso=pes;
	racionDiaria=0;
}
DtMascota::DtMascota(string nom,Genero gen,float pes,float RD){

	nombre=nom;
	genero=gen;
	peso=pes;
	racionDiaria=RD;
}

DtMascota::~DtMascota(){

}	
void DtMascota::setNombre(string nom){
	nombre=nom;
}
void DtMascota::setGenero(Genero gen){
	genero=gen;
}
void DtMascota::setPeso(float pes){
	peso=pes;
}
void DtMascota::setRacionDiaria(float racd){
	racionDiaria=racd;
}
string DtMascota::getNombre(){
	return nombre;
}

Genero DtMascota::getGenero(){
	return genero;
}
float DtMascota::getPeso(){
	return peso;
}
float DtMascota::getRacionDiaria(){
	return racionDiaria;
}
