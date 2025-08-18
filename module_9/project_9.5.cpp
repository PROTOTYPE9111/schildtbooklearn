//schildtbooklearn (p.356)
// Конструкторы, деструкторы и передача объектов

#include <iostream>
using namespace std;

class MyClass {
    int val;
    public:
    MyClass (int i) {
        val = i;
        cout << "Inside constructor:\n";
    }
    ~MyClass(){ cout << "destructing..\n";}
    int getval() { return val; }
};

void display(MyClass ob){
    cout << ob.getval() << endl;
}
int main(){
    MyClass a(10);

    cout << "Before calling display().\n";
    display(a);
    cout << "After display() returns.\n";

}