//schildtbooklearn (p.315)
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
    int range;

    // Присваиваем значения полям в объекте minivan 
    minivan.passengers = 7;
    minivan.fuelcap = 16;
    minivan.mpg = 21;

    /*
    Вычисляем расстояние которое может проехать транспортное 
    средство после заливки полного бака горючего 
    */
   range = minivan.fuelcap * minivan.mpg;
   cout << "Minivan can carry " << minivan.passengers <<
   "with a range of " << range << "\n";

   return 0;

}