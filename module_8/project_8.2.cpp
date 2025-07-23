//schildtbooklearn (p.316)
// Класс Vehicle

#include <iostream>
using namespace std;

class Vehicle {
    public:
    int passengers; // количество пассажиров
    int fuelcap; // количество топлива в галлонах
    int mpg; // расход горючего в милях на галлон
};

int main(){
    Vehicle minivan; // Создаем объект класса Vehicle
    Vehicle sportscar; // Создаем второй класс суперкары
    int range1, range2;

    // Присваиваем значения полям в объекте minivan 
    minivan.passengers = 7;
    minivan.fuelcap = 16;
    minivan.mpg = 21;
    // Присваиваем значения полям в объекте sportscar
    sportscar.passengers = 2;
    sportscar.fuelcap = 14;
    sportscar.mpg = 12;

    
    /*
    Вычисляем расстояние которое может проехать транспортное 
    средство после заливки полного бака горючего 
    */
   range1 = minivan.fuelcap * minivan.mpg;
   range2 = sportscar.fuelcap * sportscar.mpg;

   cout << "Minivan can carry " << minivan.passengers <<
   " with a range of " << range1 << "\n";

   cout << "Sportscar can carry " << sportscar.passengers <<
   " with a range of " << range2 << "\n";

   return 0; 

}