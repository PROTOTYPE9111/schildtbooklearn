#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int i;
    string str1, str2;

    cout << "введите строку 1: " << endl;
    cin >> str1;

    cout << "введите строку 2: " << endl;
    cin >> str2;

    for ( i = 0; i < str1.length(); i++)
        str1[i] = tolower(str1[i]);
    
    for (i = 0; i < str2.length(); i++)
        str2[i] = tolower(str2[i]);

    if (str1 == str2)
        cout << "Равны";
    else 
        cout << "Не равны";
}