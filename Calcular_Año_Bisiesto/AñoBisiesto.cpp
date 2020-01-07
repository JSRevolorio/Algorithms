/**
 *  Calcula si el año ingresado es bisiesto o no es bisiesto
 *  1. los multiplos de 4 son bisiesto
 *  2. los multiplos de 100 no son bisiestos
 *  3. los multiplos de 400 son bisiestos
 * */

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int year;
	
	cout <<"Ingrese el año: ";
	cin >>year;
	
	if(year % 4 != 0 || (year % 100 == 0 && year % 400 != 0 )){
		cout <<"No es bisiesto";
	}
	else{
		cout <<"Es bisiesto";
	}
	
	return 0;
}
