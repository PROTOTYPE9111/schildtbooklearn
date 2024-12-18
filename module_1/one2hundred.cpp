//schildtbooklearn (p.58)
//вывод от 1 до 100 через for 

#include <iostream>

using namespace std;

int main() {
    int count; 
    for (count = 1; count <= 100; count++) // внутри for (инциализация,условие, инкремент). Если декремент то -- ставится
    cout << count << '\n'; // через \n выводим числа от 1 до 100 в столбик
    return 0;
}