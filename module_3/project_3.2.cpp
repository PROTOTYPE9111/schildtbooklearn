// shildtbooklearn (p.110)
// 1 числа на 2 деление

#include <iostream>

using namespace std;

int main(){
    int a,b; 
    cout << "Enter numerator: ";
    cin >> a;
    cout << "Enter denumerator: ";
    cin >> b;

    if(b) cout << "Result: " << a / b << '\n';
    else cout << "Cannot divide by zero\n";

    return 0;
}