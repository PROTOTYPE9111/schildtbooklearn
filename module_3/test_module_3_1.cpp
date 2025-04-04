//schildtbooklearn (p.144)
/* Напишите программу,которая считывает с клавиатуры символы до тех пор, 
пока не будет введен символ $ . 
Организуйте в ней подсчет количества вве­ денных точек. 
Результаты подсчета должны выводиться по окончании вы­ полнения программы.
*/

#include <iostream>

using namespace std;

int main(){
    char ch;
    int count = 0;

    cout << "Enter until $: ";

    while (cin >> ch && ch != '$'){
        if (ch == '.'){
            ++count;
        }
    }
    cout << "Number of points: " << count <<  endl;
    return 0;
}