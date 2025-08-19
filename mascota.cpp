#include <iostream>
#include <string>
#include "definiciones.h"
#include "mascota.h"

Mascota::Mascota(string nom,Genero gen,float pes){

	nombre=nom;
	genero=gen;
	peso=pes;
}
Mascota::~Mascota(){

}
string Mascota::getNombre(){
	return nombre;
}

Genero Mascota::getGenero(){
	return genero;
}
float Mascota::getPeso(){
	return peso;
}
