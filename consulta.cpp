#include "consulta.h"
#include "Dtfecha.h"
#include "definiciones.h"
#include <string>


Consulta::Consulta(DtFecha* fecha,string mot){

	fechaConsulta=fecha;
	motivo=mot;
}
Consulta::~Consulta(){

}
DtFecha* Consulta::getFechaConsulta(){

	return fechaConsulta;
}
string Consulta::getMotivo(){

	return motivo;
}
