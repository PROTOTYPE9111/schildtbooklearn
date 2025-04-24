//schildtbooklearn (p.196)
// базовое объявление функций 

#include <iostream>
using namespace std;

void myfunc(); // прототип функции 

int main(){
    cout << "In main()\n";
    
    myfunc(); // Вызов функции

    cout << "Back in main\n";
}

void myfunc(){  
    cout << "Inside myfunc()" << endl;
}