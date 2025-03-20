//shildtbooklearn (p.78)
//вывод алфавита тема char

#include <iostream>

using namespace std;

int main(){
    char letter; 
    for (letter = 'A'; letter <= 'Z'; letter++)
        cout << letter;
    return 0;
}

/* 
есть еще wchar_t который например может использоваться для китайского 
тк там иероглифы и битов не хватит нужно будет больше чем стандарт 8
 */