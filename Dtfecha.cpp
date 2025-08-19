#include "Dtfecha.h"
#include <iostream>
#include "definiciones.h"




DtFecha::DtFecha(int d,int m,int a){//constructor
	dia=d;
	mes=m;
	anio=a;
}
DtFecha::DtFecha(){//constructor por def
 dia=01;
 mes=01;
 anio=2000;	
}
DtFecha::~DtFecha(){

}
int DtFecha::getDia(){
	return dia;
}
int DtFecha::getMes(){
	return mes;
}
int DtFecha::getAnio(){ //creo que va asi, no se pone solo int getDtAnio()
	return anio;
}
bool DtFecha::fechaEsAnterior(DtFecha* dtf){


	if(anio<dtf->getAnio()){
		
		return true;
			
	}else if(anio==dtf->getAnio()){
		
		if(mes<dtf->getMes()){
		
			return true;
		}else if(mes==dtf->getMes()){
		
			if(dia<dtf->getDia()){
				return true;
			}else{
				return false;
			}
		}else{
		
			return false;
		}
	}else{
		return false;
	}
}
void DtFecha::imprimirFecha(){

	cout<<"Fecha: "<<dia<<"/"<<mes<<"/"<<anio<<endl;

}

