//schildtbooklearn (p.256)
// автоматическое преобразование

#include <iostream>
using namespace std;

void f(int x);

void f(double x);

int main(){
    int i = 10;
    double d = 10.1;
    short s = 99;
    float r = 11.5F;

    f(i); // вызов версии f(int)
    f(d); // вызов версии f(double)

    f(s); // вызов версии f(int) преобразование типов
    f(r); // f(double) - преобразование 

    return 0;
}

void f(int x){
    cout << "Inside f(int): " << x << endl; 
}
void f(double x){
    cout << "Inside f(double): " << x << endl;
}