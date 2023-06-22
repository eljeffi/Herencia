#include <iostream>
#include "Padre.h"
#include "Hijo.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	//Padre P;
	Hijo H;
	int cantidad;
	char op;
	do{
		cout<<"Ingrese la Cantidad : ";
    cin>>cantidad;
    cout<<endl;
	
	 H.pedirdinero(cantidad);
		cout<<"Desea continuar : ";
		cin>>op;
	}while((op == 's') ||(op == 'S') );
	
		return 0;
}
