#include <iostream>
#include <cmath>
using namespace std;
int main () {
double x, y, z;
x = 5.0;
y = 4.0;
z = sqrt(x*x + y*y); // функция сквирт является частью библиотеки cmath
cout << "Hypotenuse is " << z;
return 0; 

}