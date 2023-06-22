#include "Hijo.h"
#include <iostream>
using namespace std;

Hijo::Hijo()
{
	cout<<"El dinero de mi padre : "<<getMostarDinero()<<endl;
	cout<<"Mis apellidos "<<apellido1<<" "<<apellido2<<endl;

}

Hijo::~Hijo()
{
}

void Hijo::pedirdinero(int cantidad){
	 
  int d_papa = getMostarDinero();
  
  if (d_papa > 0 and cantidad <= d_papa){
  	
  		setModificar(cantidad);
    	cout<<"Dinero restante Papa : "<<getMostarDinero()<<endl;
	
	}
	
  else{
  	
  	cout<<"No tienes esa cantidad de dinero"<<endl;
	}
	
	
}
