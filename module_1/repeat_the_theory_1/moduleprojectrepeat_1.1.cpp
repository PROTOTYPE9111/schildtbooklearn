//schildtbook learn (p.53)
//конвертируем футы в метры
#include <iostream>

using namespace std;

int main() {
    double f;
    double m;

    cout << "Enter feet value: ";
    cin >> f;

    m = f / 3.28;
    cout << f << "feet is " << m << " meters";

    return 0;
}
