//schildtbooklearn (p.95)
// операции в bool

#include <iostream>

using namespace std;
int main(){
    bool b1, b2;
    b1 = true;
    b2 = false;
    if(b1 && b2) cout << "not execute\n"; // and
    if (!(b1 && b2)) cout << "! (b1 && b2) is true \n"; // not
    if(b1 || b2) cout << "b1 || b2 is true\n"; // or

    return 0;
}
