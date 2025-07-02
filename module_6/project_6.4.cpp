//schildtbooklearn (p.243)
// использование ссылочных параметров в swap()

#include <iostream>
using namespace std;

//Объявляем функцию swap() с использованием ссылочных параметров void swap(int &х, int &у);

void swap (int &x, int &y);

int main(){
    int i,j;
    i = 10;
    j = 20;
    cout << "Normal values of i,j: " << endl;
    cout << i << " " << j << endl;

    swap(j,i);  //передаем адреса i и j
    
    cout << "Swapped: " << endl;
    cout << i << " " << j << endl;
    return 0;
}

/*
Здесь функция swap() определяется с использованием вызова по ссылке, а не вызова по значению. 
Поэтому она может выполнить обмен значениями двух аргументов, с которыми она вызывается.
*/

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;

}