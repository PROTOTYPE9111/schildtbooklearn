#include <iostream>
using namespace std;

void power(int base, int exp);

int main(){
    power(10,2);
    power(10,-2);

    return 0;
}
//возводим целоче число в положительную степень
void power(int base, int exp){
    int i;
    if(exp < 0) return; // отрицательные показатели степени не отрабатывают

    i = 1;

    for( ; exp; exp--) i = base * i;
    cout << "The answer is: " << i;

}