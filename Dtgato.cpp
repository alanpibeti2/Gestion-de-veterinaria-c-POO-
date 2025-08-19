#include "Dtgato.h"
#include <iostream>
#include <string>
#include "Dtmascota.h"



DtGato :: DtGato(string nom,Genero gen,float pes,TipoPelo tip):DtMascota(nom,gen,pes){

	tipoPelo=tip;
}
DtGato :: DtGato(string nom,Genero gen,float pes,float RD,TipoPelo tip):DtMascota(nom,gen,pes,RD){

	tipoPelo=tip;
}
DtGato::~DtGato(){

}

TipoPelo DtGato::getTipoPelo(){
	return tipoPelo;
}
void DtGato::imprimirDatos(){

	cout<<"-Nombre:"<<nombre<<endl;
	
	switch(genero){
	
		case 0: cout<<"-Genero: macho."<<endl;break;
		case 1: cout<<"-Genero: hembra."<<endl;break;
	}
	
	cout<<"-Peso:"<<peso<<endl;
	cout<<"-Racion Diaria:"<<racionDiaria<<endl;
	
	switch(tipoPelo){
	
		case 0: cout<<"-Tipo Pelo: corto."<<endl;break;
		case 1: cout<<"-Tipo Pelo: mediano."<<endl;break;
		case 2: cout<<"-Tipo Pelo: largo."<<endl;break;
	}
}
string DtGato::tipoMascota(){

	return "gato";
}
	

