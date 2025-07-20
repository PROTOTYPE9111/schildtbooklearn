//schildtbooklearn (p. 292)
// Получение строчных букв с использованием OR

#include <iostream>

using namespace std;

int main(){
    char ch;

    for (int i = 0; i < 10; i++){
    ch = 'A' + i;
    cout << ch;

    // Эта операция делает букву строчной ставя 6-й бит 
    ch = ch | 32;

    cout << ch << " ";
    }
    cout << "\n";
     return 0;
}