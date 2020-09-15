/**
 * Algoritmo que al ingresar una serie de numeros calculara el numero que mas veses se
 * repite y mostra las veses que se repite y cual numero es
 * 
*/

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

vector<string> split (string s, string delimiter) {

    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> reply;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        reply.push_back (token);
    }

    reply.push_back (s.substr (pos_start));
    return reply;
}

int main ()
{
    string numbers;
    int quantity = 0;
    int numberResult = 0;

    cout<<"Shows the number that occurs the most in a series \n";
    cout<<"Enter a series of numbers separated by a comma \n";
    cout<<"Example: 1,2,5,5,6\n";
    cout<<"enter numbers: ";
    cin>>numbers; 

    vector<string> listNumbers =  split(numbers, ",");
    
    //int limit = (sizeof(numbers) / sizeof(numbers[0]));
    int count = listNumbers.size();
    int *sum = new int[count];

    for (auto number : listNumbers) {
        int num = stoi(number);
        sum[num] += 1;
    }

    for(int k = 0; k<count; k++){

        if(sum[k] > quantity){
          quantity = sum[k];
          numberResult = k;
        }
    }
    
    cout<<"repetitions: " << quantity <<endl;
    cout<<"number: " << numberResult <<endl;
}