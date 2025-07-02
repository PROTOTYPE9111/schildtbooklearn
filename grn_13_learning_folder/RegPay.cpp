#include <iostream>
using namespace std;
int main()
{

double Principal; // исходная сумма займа
double IntRate; // процентная ставка в виде числа (например, 0.075)
double PayPerYear; // количество выплат в год
double NumYears; // срок займа (лет)
double Payment; // размер регулярного платежа 
double numer, denom; // временные рабочие переменные 
double b, e; // основание и степень для вызова функции pow()

cout << "Enter principal: ";
cin >> Principal;

cout << "Enter interest rate (i.o. 0.075): ";
cin >> IntRate;

cout << "Enter number of payments per year: ";
cin >> PayPerYear;

cout << "Enter number of years: ";
cin >> NumYears;

numer = IntRate * Principal / PayPerYear;

e = -(PayPerYear * NumYears);
b = (IntRate / PayPerYear) + 1;

denom = 1 - pow(b,e);

Payment = numer / denom;

cout << "Payment is " << Payment;

return 0;
}