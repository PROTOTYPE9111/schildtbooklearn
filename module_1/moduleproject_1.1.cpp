//schildtbook learn (p.53)
//конвертируем футы в метры
#include <iostream>

using namespace std;

int main() {
    double f;
    double m;
    
    cout << "Enter the length in feet: ";
    cin >> f; 
    
    m = f / 3.0;
    cout << f << " feet is " << m << " meters ";

    return 0;

}