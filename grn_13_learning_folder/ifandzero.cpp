#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter numerator: ";
    cin >> a;

    cout << "Enter denominator: ";
    cin >> b;

    if(b) cout << "Result: " << a / b << '\n'; // для управления этой функцией if достаточной одной переменной b. Оператор отношений не требуется.
    else cout << "cannot divide by zero. \n";

    return 0;
    
}
// Значение переменной b (делимое) сравнивается с нулем с помощью инструкции if(b). Дело в том, что если b
// равно нулю, условное выражение, управляющее if, оценивается как false, что приводит к выполнению ветви else. 
// а если не равно нулю, выражение оценивается как true и деление выполняется. 