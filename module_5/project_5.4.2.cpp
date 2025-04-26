//schildtbooklearn (p.213)
// упрощенная версия передачи функции указателя

#include <iostream>

using namespace std;

void f(int *j); // Функция объявляет параметр указатель
int main(){
    int i;
    
    f(&i); // передаем указатель

    cout << i; // теперь содержит 100
}

void f(int *j){
    *j = 100;
}

