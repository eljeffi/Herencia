#include "Padre.h"
#include <iostream>
using namespace std;




Padre::Padre()
{
  cargardinero();
	apellido1 = "Castro";
	apellido2 = "Murillo";

}

Padre::~Padre()
{
}

Padre::getMostarDinero(){
	
	return dinero;
}

void Padre::setModificar(int cantida){
	
	dinero -=cantida;
	
}

void Padre::cargardinero(){
	
	dinero = 100000;
}

