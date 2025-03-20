//shildtbooklearn (p.70)
//задание для контроля по модулю 1 
/*
Напишите программу, усредняющую абсолютные значения пяти значений, 
которые вводит пользователь. 
Нужно, чтобы программа отображала результат.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int i; 
    double avg, val;
    for (i=0; i<5; i++){
        cout << "Enter value ";
        cin >> val;
        avg = avg + abs(val);
    }
    avg = avg / 5;
    cout << "Среднее арифметическое чисел: " << avg;

    return 0;

}