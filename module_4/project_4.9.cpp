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