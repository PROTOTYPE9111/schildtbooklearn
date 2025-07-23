//schildtbooklearn (p. 331)
// добавление конструктора в Vehicle 

//schildtbooklearn (p.320)
//использование класса Vehicle
#include <iostream>
using namespace std;

class Vehicle{
    public:
    int passengers;
    int fuelcap;
    int mpg;

    //конструкторы класса
    Vehicle(int p, int f, int m);
    int range();
};

//Реализация конструктора для класса

Vehicle::Vehicle(int p, int f, int m){
    passengers = p;
    fuelcap = f;
    mpg = m;
}
// объявление функции члена range()
int Vehicle::range(){
    return mpg * fuelcap;
}

int main(){
    Vehicle minivan(7,6,21);
    Vehicle sportscar(2,14,12);

    int range1, range2;

    range1 = minivan.range();
    range2 = sportscar.range();
    
    cout << "Minivan can carry " << minivan.passengers << " with a range of " <<  range1 << "\n";
    cout << "Sportscar can carry " << sportscar.passengers << " with a ranges of " <<  range2 << "\n";

    return 0;

}