/**
*  Algoritmo que recorre el vector y muestra el numero que mas se repite
*  y cuantas veses se repite
*/

#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    int numbers[10] = {9,5,6,7,7,4,9,9,9,4};
    int *sum = new int[10];
    //int sum[10] = {0,0,0,0,0,0,0,0,0,0};

    int quantity = 0;
    int number = 0;

    int limit = (sizeof(numbers) / sizeof(numbers[0]));
    for(int i = 0; i<limit; i++){
        sum[numbers[i]]+=1;
    }

    for(int k = 0; k<limit; k++){
        if(sum[k] > quantity){
          quantity = sum[k];
          number = k;
        }
    }
    cout<<"repetitions: " << quantity <<endl;
    cout<<"number: " << number<<endl;

    return 0;
}
