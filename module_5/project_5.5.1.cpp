//schildtbooklearn (p.216)
// передача массива в функцию

#include <iostream>
using namespace std;

void display(int num[10]);

int main(){
    int t[10], i; 
    for(i = 0; i < 10; ++i) t[i] = i;

    display(t); // передаем функции массив t
}

// функция выводит все элементы массива

void display(int num[10]){
    int i;
    for(i = 0; i < 10; i++) cout << num[i] << endl;
}