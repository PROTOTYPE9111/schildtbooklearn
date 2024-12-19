//shildtbooklearn (p.70)
//задание для контроля по модулю 1 
/*
Год Юпитера (то есть время, за которое он делает полный оборот вокру Солнца) 
составляет примерно 12 земных лет. Напишите программу, которая конвертирует годы Юпитера 
(эти значения вводит пользователь) в годы Земли. Допустимо использование нецелых значений.
*/

#include <iostream>

using namespace std;

int main(){
    double jupiter_years;
    double earth_years;
    double jupiter_to_earth = 12;
    cout << "Введите год на юпитере: ";
    cin >> jupiter_years;
    earth_years = jupiter_years * jupiter_to_earth;
    cout << jupiter_years << " юпитерских лет равен " << earth_years << " земных лет " << endl;
    return 0;

    }
