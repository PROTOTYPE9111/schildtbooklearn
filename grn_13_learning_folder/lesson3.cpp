#include <iostream>
using namespace std;
int main()
{
double result, n, d;
cout << "Укажите число ";
cin >> n;
cout << "Укажите делитель ";
cin >> d;
if (d != 0) {
cout << "d не равно нулю, поэтому делитель ОК" << "\n";
result = n / d;
cout << n << " / " << d << " is " << result;
}
return 0;
}