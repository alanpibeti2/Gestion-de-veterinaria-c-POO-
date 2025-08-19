#include "Dtperro.h"
#include <iostream>
#include "definiciones.h"
#include <string>	
#include "Dtmascota.h"


DtPerro :: DtPerro(string nom,Genero gen,float pes,RazaPerro raz,bool VC):DtMascota(nom,gen,pes){

	raza=raz;
	vacunaCachorro=VC;
}
DtPerro :: DtPerro(string nom,Genero gen,float pes,float RD,RazaPerro raz,bool VC):DtMascota(nom,gen,pes,RD){

	raza=raz;
	vacunaCachorro=VC;
}
DtPerro::~DtPerro(){

}

void DtPerro::setRaza(RazaPerro unaRaza){
	raza=unaRaza;
	
}
void DtPerro::setVacunaCachorro(bool VC){
	vacunaCachorro=VC;
	
}
RazaPerro DtPerro::getRaza(){

	return raza;
}
bool DtPerro::getVacunaCachorro(){

	return vacunaCachorro;
}
void DtPerro::imprimirDatos(){

	cout<<"-Nombre:"<<nombre<<endl;
	
	switch(genero){
	
		case 0: cout<<"-Genero: macho."<<endl;break;
		case 1: cout<<"-Genero: hembra."<<endl;break;
	}
	
	cout<<"-Peso:"<<peso<<endl;
	cout<<"-Racion Diaria:"<<racionDiaria<<endl;
	//{labrador,ovejero,bulldog,pitbull,collie,pekines,otro}
	
	switch(raza){
	
		case 0: cout<<"-Raza: labarador."<<endl;break;
		case 1: cout<<"-Raza: ovejero."<<endl;break;
		case 2: cout<<"-Raza: bulldog."<<endl;break;
		case 3: cout<<"-Raza: pitbull."<<endl;break;
		case 4: cout<<"-Raza: collie."<<endl;break;
		case 5: cout<<"-Raza: pekines."<<endl;break;
		case 6: cout<<"-Raza: otro."<<endl;break;
	}
	
	
	
	if(vacunaCachorro){
		cout<<"-VacunaCachorro: si:"<<endl;
	}else{
		cout<<"-VacunaCachorro: no:"<<endl;
	}
}
string DtPerro::tipoMascota(){

	return "perro";
}
