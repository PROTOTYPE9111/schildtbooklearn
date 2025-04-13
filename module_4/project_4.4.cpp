//schildtbooklearn (p.157)
//считывание строк с клавиатуры без ошибок

#include <iostream>

using namespace std;

int main(){
    char str[20];
    cout << "Enter a string: ";
    gets(str);
    cout << "Your string: " << str << endl; 

}