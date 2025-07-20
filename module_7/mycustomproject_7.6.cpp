#include <iostream>
using namespace std;

int main() {
    char ch;
    for (int i = 0; i < 10; i++) {
        ch = 'A' + i;
        cout << ch << 'A' << " "; // например: AA BA CA DA ...
    }
    cout << endl;
    return 0;
}
