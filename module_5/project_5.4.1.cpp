//schildtbooklearn (p.214)
// передача функции указателя

#include <iostream>

using namespace std;

void f(int *j); // Функция объявляет параметр указатель
int main(){
    int i;
    int *p;

    p = &i; // указатель p ссылается на переменную i
    
    f(p); // передаем указатель

    cout << i; // теперь содержит 100
}

void f(int *j){
    *j = 100;
}

