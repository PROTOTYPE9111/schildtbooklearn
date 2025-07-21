//schildtbooklearn (p. 302)
// операция ?
// Предотвращаем деление на 0

#include <iostream>
using namespace std;

int div_zero();

int main(){
    int i, j, result;

    cout << "Enter dividend and divisor: ";
    cin >> i >> j;

    // не допускаем деления на 0
    result = j ? i/j : div_zero();

    cout << "Result: " << result << endl;
    return 0;
}

int div_zero(){
    cout << "Cannot divide by zero. ";
    return 0;
}