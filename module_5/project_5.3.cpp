#include <iostream>

using namespace std;

void f();

int main(){
    cout << "Before call " << endl;

    f();

    cout << "After call " << endl;

    return 0;
}

void f(){
    cout << "Inside f() " << endl;

    return ; //возвращение к инициатору вызова

    cout << "This doesnt display" << endl;
}