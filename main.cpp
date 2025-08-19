//Programacion avanzada - curso 2025
//Laboratorio 1.

#include <iostream>
#include "mascota.h"
#include "perro.h"
#include "gato.h"
#include "consulta.h"
#include "Dtmascota.h"
#include "Dtperro.h"
#include "Dtgato.h"
#include "Dtconsulta.h"
#include "Dtfecha.h"
#include <string>
#include "socio.h"
#include "definiciones.h"
#include <stdexcept>

using namespace std;

Socio *socios[MAX_SOCIO];
int topeSocio=0;

void ingresarDatosSocio();
DtMascota* ingresarDatosMascota();
void registrarSocio(string ci,string nombre,DtFecha* dtfecha,DtMascota* dtmascota);
//void agregarMascota(string ci,DtMascota* dtmascota);
bool verificarSocio(string CI);
void agregarMascota2(string ci,DtMascota* dtmascota);
void ingresarConsulta(string motivo, string ci, DtFecha* fechaConsulta);
void ingresarDatosConsulta();
void eliminarSocio(string ci);
DtConsulta** verConsultasAntesDeFecha(DtFecha* fecha,string ciSocio, int& cantConsultas);
void ingresarDatosParaVerConsulta();
void imprimirConsultas(DtConsulta**,int);
DtMascota** obtenerMascotas(string ci, int& cantMascotas);
void ingresaDatosParaVerMascota();
void imprimirMascotas(DtMascota**,int);

int main(){

	int opcion=1;
	string localCi;
	
	//socio y perro de prueba.
	//DtFecha *df = new DtFecha(1,4,25);
	//Perro *p = new Perro("toby",macho,1.0,otro,1);
	//Socio *s = new Socio("12345","mateo",df);
	//socios[topeSocio]=s;
	//topeSocio++;
	//DtPerro dp("toby",macho,100,otro,1);
	//DtGato dg("ramon",macho,100,largo);
	//Perro per("simon",macho,100,otro,0);*/
		
	cout<<"Bienvenido!"<<endl;
	
	while(opcion!=0){
	
	cout<<endl;
	cout<<"Elija una opcion:"<<endl;
	cout<<"\t1) Registrar socio."<<endl;
	cout<<"\t2) Agregar mascota."<<endl;
	cout<<"\t3) Ingresar consulta."<<endl;
	cout<<"\t4) Ver consulta antes de una fecha determinada."<<endl;
	cout<<"\t5) Eliminar socio."<<endl;
	cout<<"\t6) Obtener mascotas."<<endl;
	cout<<"\t0) Salir."<<endl;
	cout<<"Opcion: ";
	cin>>opcion;
	
	
	
		switch(opcion){
		
		case 0:
			break;
		case 1:
			ingresarDatosSocio();
			break;
		case 2:
			cout<<"Ingrese su cedula: ";
			cin>>localCi;
			//agregarMascota(localCi,ingresarDatosMascota());
			agregarMascota2(localCi,ingresarDatosMascota());
			break;
		case 3:
			ingresarDatosConsulta();
			break;
		case 4:
			ingresarDatosParaVerConsulta();
			break;
		case 5: 
		
			cout<<"Ingrese la cedula del socio a eliminar: ";
			cin>>localCi;
			eliminarSocio(localCi);
			break;
		case 6:
			ingresaDatosParaVerMascota();
			break;
		default:
			cout<<"Opcion incorrecta."<<endl;
			break;
		
		}
	}


return 0;
}

void ingresarDatosSocio(){

	string lci,lnombre;
	int ldia,lmes,lanio,oper=0;

	cout<<"Ingrese su CI: ";
	cin>>lci;
	cout<<"Ingrese su nombre: ";
	cin>>lnombre;
	cout<<"Ingrese dia: ";
	cin>>ldia;
	cout<<"Ingrese mes: ";
	cin>>lmes;
	cout<<"Ingrese anio: ";
	cin>>lanio;
	
	DtFecha *dtf=new DtFecha(ldia,lmes,lanio);
		
	
	registrarSocio(lci,lnombre,dtf,ingresarDatosMascota());

}

DtMascota* ingresarDatosMascota(){

	int oper=0;
	string mnombre;
	int opgenero,opraza,optip;
	float mpeso;
	bool mvc;
	

	while(oper!=1 && oper!=2){
		cout<<"Ingrese 1 si su mascota es un perro,ingrese 2 si es un gato: ";
		cin>>oper; 
			
		if(oper==1){
			
			cout<<"Ingrese el nombre de su masota: ";
			cin>>mnombre;
			cout<<"Ingrese su genero: "<<endl;
			cout<<"0)macho."<<endl;
			cout<<"1)hembra."<<endl;
			cin>>opgenero;
			cout<<"Ingrese su peso: ";
			cin>>mpeso;
			cout<<"Ingrese su raza: "<<endl;
			cout<<"0)Labrador."<<endl;
			cout<<"1)Ovejero."<<endl;
			cout<<"2)Bulldog."<<endl;
			cout<<"3)Pitbull."<<endl;
			cout<<"4)Collie."<<endl;
			cout<<"5)Pekines."<<endl;
			cout<<"6)Otro."<<endl;
			cin>>opraza;
			cout<<"Ingrese 1 si tiene la vacuna de cachorro, 0 en caso contrario: ";
			cin>>mvc;
			
			Genero mgenero = static_cast<Genero>(opgenero);
			RazaPerro mraza = static_cast<RazaPerro>(opraza);
			
			DtPerro *dtp=new DtPerro(mnombre,mgenero,mpeso,mraza,mvc);
			
			return dtp;
			
		}else if(oper==2){
			
			cout<<"Ingrese el nombre de su masota: ";
			cin>>mnombre;
			cout<<"Ingrese su genero: "<<endl;
			cout<<"0)macho."<<endl;
			cout<<"1)hembra."<<endl;
			cin>>opgenero;
			cout<<"Ingrese su peso: ";
			cin>>mpeso;
			cout<<"Ingrese su tipo de pelo: "<<endl;
			cout<<"0)Corto."<<endl;
			cout<<"1)Mediano."<<endl;
			cout<<"2)Largo."<<endl;
			cin>>optip;
			
			Genero mgenero = static_cast<Genero>(opgenero);
			TipoPelo mtip = static_cast<TipoPelo>(optip);
			
			DtGato *dtg = new DtGato(mnombre,mgenero,mpeso,mtip);
			
			return dtg;
			
		}else{
			cout<<"Opcion incorrecta."<<endl;
		}
	}
	return 0;
}


void registrarSocio(string ci,string nombre,DtFecha* dtfecha,DtMascota* dtmascota){
	
	
	 if(dtmascota->tipoMascota()=="perro"){
	 
	 	DtPerro* dtperro = dynamic_cast<DtPerro*>(dtmascota);
	 	
	 	Socio* s1 = new Socio(ci,nombre,dtfecha);
	 	Mascota *p = new Perro(dtperro->getNombre(),dtperro->getGenero(),dtperro->getPeso(),dtperro->getRaza(),dtperro->getVacunaCachorro());
	 	
	 	s1->masMascota(p);
	 	
	 	socios[topeSocio]=s1;
	 	topeSocio++;
	 	
	 }else if(dtmascota->tipoMascota()=="gato"){
	 
	 	DtGato* dtgato = dynamic_cast<DtGato*>(dtmascota);
	 	
	 	Socio* s1 = new Socio(ci,nombre,dtfecha);
	 	Mascota *g = new Gato(dtgato->getNombre(),dtgato->getGenero(),dtgato->getPeso(),dtgato->getTipoPelo());
	 	
	 	s1->masMascota(g);
	 	
	 	socios[topeSocio]=s1;
	 	topeSocio++;
	}
	
	cout<<"El socio se ingreso correctamente."<<endl;
	
}

/*void agregarMascota(string ci,DtMascota* dtmascota){

	try{
		if(verificarSocio(ci)){
		
			cout<<"El socio existe."<<endl;
		}
		
	}catch(const invalid_argument& e){
		cout<<"Excepcion: "<<e.what()<<endl;
	}
}*/

bool verificarSocio(string CI){

	

	bool encontre=false;
	
	for(int i=0;i<topeSocio;i++){
	
			
		if(socios[i]->getCi()==CI){
		
			encontre=true;
		}
	}
	//if(!encontre){
	//throw invalid_argument("El socio NO esta registrado.");
	//}
	
	return encontre;
	
}
void agregarMascota2(string ci,DtMascota* dtmascota){


	if(verificarSocio(ci)){
	
		for(int i=0;i<topeSocio;i++){
		
			if(socios[i]->getCi()==ci){
			
				if(dtmascota->tipoMascota()=="perro"){
	 
				 	DtPerro* dtperro = dynamic_cast<DtPerro*>(dtmascota);
				 	
				 	Mascota *p = new Perro(dtperro->getNombre(),dtperro->getGenero(),dtperro->getPeso(),dtperro->getRaza(),dtperro->getVacunaCachorro());
				 	
				 	socios[i]->masMascota(p);
				 
				 	
				 }else if(dtmascota->tipoMascota()=="gato"){
				 
				 	DtGato* dtgato = dynamic_cast<DtGato*>(dtmascota);

				 	Mascota *g = new Gato(dtgato->getNombre(),dtgato->getGenero(),dtgato->getPeso(),dtgato->getTipoPelo());
				 	
				 	socios[i]->masMascota(g);
				 	
				}
			}
		}
		
		cout<<"La mascota se ingreso correctamente"<<endl;
	}else{
	
		cout<<"El Socio no Existe"<<endl;
	} 
}

void ingresarConsulta(string motivo, string ci, DtFecha* fechaConsulta){

	if(verificarSocio(ci)){
	
		for(int i=0;i<topeSocio;i++){

			if(socios[i]->getCi()==ci){
			
				Consulta *c = new Consulta(fechaConsulta,motivo);
				socios[i]->masConsulta(c);
			}
		}
	
		cout<<"Se agrego la consulta correctamente."<<endl;
		
	}else{
	
		cout<<"El Socio no Existe"<<endl;
	} 

}

void ingresarDatosConsulta(){
	
	int ld,lm,la;
	string mot,lci;
	
	cout<<"Ingrese su cedula: ";
	cin>>lci;
	cout<<"Ingrese el dia: ";
	cin>>ld;
	cout<<"Ingrese el mes: ";
	cin>>lm;
	cout<<"Ingrese el anio: ";
	cin>>la;
	cout<<"Ingrese el motivo de la consulta: ";
	cin>>mot;
	
	DtFecha* dtfecha = new DtFecha(ld,lm,la);
	
	DtConsulta *dtc=new DtConsulta(dtfecha,mot);
	
	ingresarConsulta(dtc->getMotivo(),lci,dtc->getFecha());
	
	
}

void eliminarSocio(string ci){

	if(verificarSocio(ci)){
	
		for(int i=0;i<topeSocio;i++){
		
			if(socios[i]->getCi()==ci){
				
				delete socios[i];
				
				socios[i]=socios[topeSocio-1];
				topeSocio--;
			}
		}
		
		cout<<"El socio se elimino correctamente."<<endl;
	}else{
	
		cout<<"El Socio no Existe"<<endl;
	} 

}	
DtConsulta** verConsultasAntesDeFecha(DtFecha* fecha,string ciSocio, int& cantConsultas){

	int cont=0,iter;
	
	for(int i=0;i<topeSocio;i++){
	
		if(socios[i]->getCi()==ciSocio){
			iter=i;
		}
	}
			Consulta* c;
			DtFecha* dtf;
			
			for(int j=0;j<cantConsultas;j++){
				
				c=socios[iter]->getConsulta(j);
				dtf=c->getFechaConsulta();
				
				if(dtf->fechaEsAnterior(fecha)){
					cont++;
				}			
					
			}
			DtConsulta** punteroDTC=new DtConsulta*[cont];  
			
			if(cont==0){
			
				cout<<"No hay consultas antes de la fecha ingresada."<<endl;
			}else{
			
				for(int j=0;j<cont;j++){
					
					c=socios[iter]->getConsulta(j);
					
					punteroDTC[j]=new DtConsulta(c->getFechaConsulta(),c->getMotivo());
								
						
				}
			}

		
		
	
	cantConsultas=cont;
	return punteroDTC;

}

void ingresarDatosParaVerConsulta(){


	string locCi;
	int ld,lm,la;
	DtConsulta** dtConArr;
	
	cout<<"Ingrese la cedula del socio: "<<endl;
	cin>>locCi;
	cout<<"Ingrese el dia: "<<endl;
	cin>>ld;
	cout<<"Ingrese el mes: "<<endl;
	cin>>lm;
	cout<<"Ingrese el anio: "<<endl;
	cin>>la;
	
	DtFecha* dtfecha= new DtFecha(ld,lm,la);
	
	if(verificarSocio(locCi)){
	
		for(int i=0;i<topeSocio;i++){
			
			int cc=socios[i]->getTopeConsulta();
			
			if(socios[i]->getCi()==locCi){
			
				dtConArr=verConsultasAntesDeFecha(dtfecha,locCi,cc);
				imprimirConsultas(dtConArr,cc);
	
			}
		}
		
		cout<<"consultas imprimidas correctamente."<<endl;
	}else{
	
		cout<<"El Socio no Existe"<<endl;
	}
	
}

void imprimirConsultas(DtConsulta** punteroDTC,int cantC){

	
	for(int i=0;i<cantC;i++){
	
		punteroDTC[i]->imprimirConsulta();
		cout<<endl;
	
	}
		
}
DtMascota** obtenerMascotas(string ci, int& cantMascotas){
	
	int iter;
	DtMascota** punteroDTM=new DtMascota*[cantMascotas]; 
	
	for(int i=0;i<topeSocio;i++){
		if(socios[i]->getCi()==ci){
			iter=i;	
		}
	}
	
	for(int j=0;j<cantMascotas;j++){
	
		Mascota* m=socios[iter]->getMascota(j);
	
		if(m->OtipoMascota()=="perro"){
		
			Perro* perro = dynamic_cast<Perro*>(m);
			
			punteroDTM[j]= new DtPerro(perro->getNombre(),perro->getGenero(),perro->getPeso(),perro->obtenerRacionDiaria(),perro->getRaza(),perro->getVacunaCachorro());
			
			
		
		}else if(m->OtipoMascota()=="gato"){
		
			
			Gato* gato = dynamic_cast<Gato*>(m);
			
			punteroDTM[j]= new DtGato(gato->getNombre(),gato->getGenero(),gato->getPeso(),gato->obtenerRacionDiaria(),gato->getTipoPelo());
			
		
		}
	}
	
	return punteroDTM;
}

void ingresaDatosParaVerMascota(){

	string lci;
	DtMascota** dtMasArr;
	
	cout<<"Ingrese la cedula del socio: "<<endl;
	cin>>lci;
	
	
	
	
	
	if(verificarSocio(lci)){
	
		for(int i=0;i<topeSocio;i++){
			
			if(socios[i]->getCi()==lci){
				
				int cm=socios[i]->getTopeMascota();
				
				dtMasArr=obtenerMascotas(lci,cm);
				imprimirMascotas(dtMasArr,cm);
				
				
			}
		}
		
		cout<<"Mascotas imprimidas correctamente."<<endl;
	}else{
	
		cout<<"El Socio no Existe"<<endl;
	}


}
void imprimirMascotas(DtMascota** punteroDTM,int cantM){

	for(int i=0;i<cantM;i++){
	
		punteroDTM[i]->imprimirDatos();
		cout<<endl;
	
	}


}










