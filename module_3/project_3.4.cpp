// shildtbooklearn (p.114-115)
// простой генератор 

#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Введите число: ";
    cin >> num;

    switch(num) {
        case 1: 
            cout << "You choose A";
            break;
        case 2:
            cout << "You choose B";
            break;
        case 3: 
            cout << "You choose C";
            break;
        default: 
            cout << "You cant choose like this, only from 1 to 3";
    }
    return 0;
}
