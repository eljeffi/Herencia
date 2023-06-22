#ifndef PADRE_H
#define PADRE_H
#include <iostream>


using namespace std;

class Padre
{
	public:
		Padre();
		~Padre();
		 string apellido1, apellido2;
		 int getMostarDinero();
		 void setModificar(int dinero);
	protected:

		
  private:
  void cargardinero();
 	int dinero;
};

#endif
