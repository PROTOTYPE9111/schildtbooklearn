//schildtbooklearn (p.200)
// функция power с return

#include <iostream>
using namespace std;
void power (int base, int exp);

int main(){
    power (10,2);
    power (10,-2);
}
void power (int base, int exp){
    int i;
    if (exp < 0) return; // дальше не делаем если отрицательное

    i = 1;
    for ( ; exp; exp--) i = base * i;
    cout << "The answer is: " << i;
}