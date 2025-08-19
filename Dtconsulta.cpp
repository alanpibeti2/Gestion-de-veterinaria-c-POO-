#include "Dtconsulta.h"
#include "Dtfecha.h"
#include "definiciones.h"
#include <string>
#include <iostream>


 DtConsulta::DtConsulta(DtFecha* dtfecha,string mot){
 	
 	fechaConsulta=dtfecha;
 	motivo=mot;
}
DtConsulta::~DtConsulta(){

}
 DtFecha* DtConsulta::getFecha(){ //retorna un tipo dtFecha*
  return fechaConsulta;
}
string DtConsulta::getMotivo(){
 return motivo;
 }

void DtConsulta::imprimirConsulta(){

	fechaConsulta->imprimirFecha();
	cout<<"Motivo: "<<motivo<<endl;
}

