#include <iostream>
using namespace std;
int main()
{
double f; // содержит длину в футах
double m; // содержит результат преобразования в метры 

cout << "enter the length in feet: ";
cin >> f; // cчитывает значение в футах

m = f / 3.28; // преобразование в метры 
cout << f << "feet is " << m << " meters.";
return 0;
}