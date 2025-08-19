all: main.o consulta.o socio.o mascota.o perro.o gato.o Dtconsulta.o Dtmascota.o Dtperro.o Dtgato.o Dtfecha.o
	g++ -o main main.o consulta.o socio.o mascota.o perro.o gato.o Dtconsulta.o Dtmascota.o Dtperro.o Dtgato.o Dtfecha.o
main.o: main.cpp
	g++ -c main.cpp
	
consulta.o: consulta.h consulta.cpp
	g++ -c consulta.cpp
	
socio.o: socio.h socio.cpp
	g++ -c socio.cpp

mascota.o: mascota.h mascota.cpp
	g++ -c mascota.cpp

perro.o: perro.h perro.cpp
	g++ -c perro.cpp
	
gato.o: gato.h gato.cpp
	g++ -c gato.cpp

Dtconsulta.o: Dtconsulta.h Dtconsulta.cpp
	g++ -c Dtconsulta.cpp
	
Dtmascota.o: Dtmascota.h Dtmascota.cpp
	g++ -c Dtmascota.cpp

Dtperro.o: Dtperro.h Dtperro.cpp
	g++ -c Dtperro.cpp
	
Dtgato.o: Dtgato.h Dtgato.cpp
	g++ -c Dtgato.cpp

Dtfecha.o: Dtfecha.h Dtfecha.cpp
	g++ -c Dtfecha.cpp

clean: 
	rm -f main
	rm -f *.o
