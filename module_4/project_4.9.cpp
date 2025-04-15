//schildtbooklearn (p.172)
// указатели

#include <iostream>

using namespace std;

int main(){
    int total;
    int *ptr;
    int val;
    
    total = 3200; // переменной total = 3200
    ptr = &total; // получаем адрес переменной total
    val = *ptr; // получаем значение хранимое по адресу
    cout << "Total: " << val << endl;
}


/*
отдельно приведение типа. Нельзя разные типы иметь 
int *f
double i
f= &i;
так нельзя!!!

НО!
можно обойти через приведение типа
р = (int *) &f; Но делаем на свой страх и риск
*/