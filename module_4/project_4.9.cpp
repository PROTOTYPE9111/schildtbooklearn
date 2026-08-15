#include <iostream>
using namespace std;

int main(){
    int total;
    int *ptr;
    int val;

    total = 3200; // переменной присвоили
    ptr = &total; // получили АДРЕС переменной
    val = *ptr; // получили значение по адресу

    cout << "Total is: " << val << endl;

    return 0;
}