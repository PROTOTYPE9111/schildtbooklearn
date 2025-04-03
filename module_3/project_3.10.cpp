//shildtbooklearn (p.122)
//вариация for когда несколько управляющих переменных цикла

#include <iostream>

using namespace std;

int main() {
    int x, y;
    for(x = 0, y = 10; x <= y; ++x, --y )
    cout << x << " " << y << " ";
    
    return 0;
} 