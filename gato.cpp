#include <iostream>
#include <string>
#include "definiciones.h"
#include "gato.h"
#include "mascota.h"

Gato :: Gato(string nom,Genero gen,float pes,TipoPelo tip):Mascota(nom,gen,pes){

	tipoPelo=tip;
}
Gato::~Gato(){

}

float Gato::obtenerRacionDiaria(){

	return (peso)*0.015;
}
string Gato::OtipoMascota(){

	return "gato";
}
TipoPelo Gato::getTipoPelo(){
	return tipoPelo;
}
