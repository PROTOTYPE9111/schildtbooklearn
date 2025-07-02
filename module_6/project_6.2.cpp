// функция swap()
// меняет значения двух переменных, на которые указывают ее аргументы.

#include <iostream>

using namespace std;

void swap(int *x, int *y)

int main(){
    int i, j;
    i = 10;
    j = 20;
    
    cout << "Initial Values of i and j: " << endl;
    cout << i << ' ' << j << endl;
    swap(&j, &i); // Вызываем swap() с адресами переменных i и j 

    cout << "Swapped values of i and j: " << endl;
    return 0;
}

// обмен значения двух переменных, адресуемых параметрами i j 
void swap(){
    int temp;

    temp = *x; // временно сохраняем значение расположенное по адресу х
    *x = *y; // помещаем значение, хранимое по адресу y по адресу х 
    *y = temp; // помещаем значение которое раньше хранилось по адресу х, по адресу y
    
}

