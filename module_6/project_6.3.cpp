// Использование ссылочного параметра

#include <iostream>
using namespace std;

void f(int &i); // здесь i объявляется как ссылочный параметр

int main(){
    int val = 1; 
    cout << "Old value for val: " << val << endl;
    f(val); // передаем адрес переменной val
    cout << "New value for val: " << val << endl;
    return 0;
}
void f (int &i){
    i = 10; // модификация аргумента, заданного при вызове
}