//schildtbooklearn (p.290)
// Получение прописных букв с использованием побитовой операции and

#include <iostream>

using namespace std;

int main(){
    char ch;

    for (int i = 0; i < 10; i++){
        ch = 'a' + i;
        cout << ch;

        //Эта операция обнуляет 6-й бит

        ch = ch & 223; // в переменной ch теперь прописи
        cout << ch << " ";
    }

    cout << "\n";
    return 0;
}