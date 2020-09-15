/**
 * Algoritmo que muestra si un vector es simetrico o no es simetrico
 * */


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	char characters[] = {'a','a','b','b','c','c','b','b','a','a'};
	string result;
	 
	int limit = (sizeof(characters)/sizeof(*characters));
	int k = limit;
	
	for(int i = 0; i< limit; i++){
		k--;
		if(characters[i] == characters[k]){
		   	result = "Symmetric";
		}
		else{
			result = "Asymmetric";
			break;
		}
	}
	
	cout<<"El resultado del vector es: " << result << endl;
	
	return 0;
}

