// schildtbooklearn (p.251)
// перегрузка функций

#include <iostream>
using namespace std;

void f(int i); // один целочисленный тип
void f(int i, int j); // два целочисленных типа
void f(double k); // один параметр типа double

int main(){
    f(10); //вызов функции f(int)
    f(10,20); //f (int,int)
    f(12.23); // вызов функции f(double)
    return 0;
}
void f (int i)
{
    cout << "In f(int), i is " << i << endl;
}
void f (int i, int j){
    cout << "In f(int, int) i is " << i;
    cout << "j is " << j << endl;
}
void f(double k){
    cout << "Here k is " << k << endl;
}
