// Задание от Koshkej
// работа и повтор темы указателей + использование функции 
#include <iostream>
using namespace std;

void swap(int* f, int* z);

int main(){
    int f = 1;
    int z = 2;
    swap(&f,&z); // в компиляторе MSVC он ест и компилирует без амперсандов. Но так нельзя делать! нужно делать через адреса!
    cout << f << z;
}

void swap(int* f, int* z){
    int buf;
    buf = *f; 
    *f = *z;
    *z = buf;
}