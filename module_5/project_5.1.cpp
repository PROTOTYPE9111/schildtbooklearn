#include <iostream>
using namespace std;

void myfunc(); // прототип функции

int main(){
    cout << "In main()" << endl;
   
    myfunc(); // вызов функции

    cout << "Back in main()" << endl;
    
    return 0;
}
//Определение функции 
void myfunc(){
    cout << "INSIDE myfunc()" << endl; // функция myfunc()
}