//schildbooklearn (p.238)
/* изменение параметра при вызове функции по значению
не влияет на аргумент */

#include <iostream>

using namespace std;
double reciprocal(double x);

int main(){
    double t = 10.0;
    cout << "Reciprocal of 10.0 is " << reciprocal(t) << "\n";
    cout << "Value of t is still: " << t << "\n";
    return 0;
}
// функция возвращает обратную величину от заданного значения

double reciprocal(double x){
    x = 1 / x; //вычисляем обратную величину 
    return x;
}