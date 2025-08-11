//schildtbooklearn (p.338)
// Определение конструктора, деструктора и функции range как встраиваемые

#include <iostream> 
using namespace std;

// Объявление класса Vehicle

class Vehicle {
    // приватны
    int passengers;
    int fuelcap;
    int mpg;

    public:
    // Конструктор для класса 
    Vehicle(int p, int f, int m){
        passengers = p;
        fuelcap = f;
        mpg = m;
    }

    // вычисляем макс пробег
    int range(){return mpg * fuelcap;}

    //функция доступа
    int get_passengers() {return passengers;}
    int get_fuelcap() {return fuelcap; }
    int get_mpg(){ return mpg; }
};

int main(){
    Vehicle minivan(7,16,21);
    Vehicle sportscar(2,14,12);

    int range1, range2;

    range1 = minivan.range();
    range2 = sportscar.range();

    cout << "Minivan can carry " << minivan.get_passengers() << " with range " << range1 << endl;
    cout << "Sportscar can carry " << sportscar.get_passengers() << " with range " << range2 << endl;

    return 0;
}