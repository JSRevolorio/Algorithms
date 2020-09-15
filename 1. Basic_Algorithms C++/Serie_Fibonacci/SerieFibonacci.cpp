/**
 * La serie fibonacci realiza la suma de los dos numeros anteriores
 * 
 * Ejemplo
 * {1, 1, 2, 3, 5, 8, 13, ......... n }
 * 
 * */

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int numberOfElements;
	int previous = 0, auxiliary = 0, number = 1;
	
	cout <<"ingrese el numero de elementos de la serie: ";
	cin >>numberOfElements;
	
	for(int i=0; i<numberOfElements; i++){
		cout << number << ", ";
		auxiliary = number; 
		number += previous;
		previous = auxiliary;
	}

	cout<<"\n";

	return 0;
}

