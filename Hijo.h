#ifndef HIJO_H
#define HIJO_H
#include "Padre.h"

class Hijo : private Padre
{
	public:
		Hijo();
		~Hijo();
		void pedirdinero(int dinero);
	protected:
};

#endif
