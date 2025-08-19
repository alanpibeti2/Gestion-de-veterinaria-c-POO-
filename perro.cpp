#include <iostream>
#include <string>
#include "definiciones.h"
#include "perro.h"
#include "mascota.h"

Perro :: Perro(string nom,Genero gen,float pes,RazaPerro raz,bool VC):Mascota(nom,gen,pes){

	raza=raz;
	vacunaCachorro=VC;
}
Perro::~Perro(){

}
float Perro::obtenerRacionDiaria(){
	
	return (peso)*0.025;
}
string Perro::OtipoMascota(){
	
	return "perro";

}
RazaPerro Perro::getRaza(){

	return raza;
}
bool Perro::getVacunaCachorro(){

	return vacunaCachorro;
}
