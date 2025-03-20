//shildtbooklear (p.79)
//float vs double. Лучше double потому что много матана юзается в плюсах + double > float
// На примере теоремы Пифагора для вычисления длины гипотенузы по заданным длинам 2х других сторон

#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double x, y, z;

    x = 5.0;
    y = 4.0;

    z = sqrt(x*x + y*y); 

    cout << "Гипотенуза равна = " << z;
    return 0;
}