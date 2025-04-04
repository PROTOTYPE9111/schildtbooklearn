//schildtbooklearn (p.144)
//Напишите код инструкции for для цикла, который считает от 1000 до 0 с шагом -2.

#include <iostream>

using namespace std;

int main(){
    int x;
    for (x = 1000; x >= 0; x -= 2){
        cout << " " << x << endl;
    }
}