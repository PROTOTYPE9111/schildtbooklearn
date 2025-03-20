//shildtbooklearn (p.103)
// Вычисление размера платежей по займу

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double Principal; //исходная сумма займа
    double IntRate; // процентная ставка в виде числа
    double PayPerYear; // кол-во выплат в год
    double NumYears; // срок займа
    double Payment; // размер платежа
    double numer, denom; // временные рабочие переменные
    double b, e; // основание и степень для вызова pow()

    cout << "Введите сумму займа: ";
    cin >> Principal; 

    cout << "Введите процентную ставку: ";
    cin >> IntRate;

    cout << "Введите количество платежей в год: ";
    cin >> PayPerYear;

    cout << "Введите срок займа:";
    cin >> NumYears;

    numer = IntRate * Principal / PayPerYear;
    
    e = -(PayPerYear * NumYears);
    b = (IntRate / PayPerYear) + 1;

    denom = 1 - pow(b, e);

    Payment = numer / denom;

    cout << "Payment is: " << Payment;

    return 0;
}