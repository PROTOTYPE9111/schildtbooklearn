#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char str[80];
    cout << "Enter a string: ";
    gets(str); //считывание строки с клавиатуры через gets()
    cout << "Here is yours: ";
    cout << str;

    return 0;
}