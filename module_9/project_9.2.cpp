// schildtbooklearn (p.353)
// Присваивание объектов

#include <iostream>
using namespace std;

class Test {
    int a, b;
    public:
    void setab(int i, int j) { a = i, b = j; }
    void showab(){
        cout << "a is " << a << endl;
        cout << "b is " << b << endl;
    }
};

int main(){
    Test ob1, ob2;

    ob1.setab(10, 20);
    ob2.setab(0,0);
    cout << "ob1 before: " << endl;
    ob1.showab();
    cout << "\n";
    cout << "ob2 before: " << endl;
    ob2.showab();
    cout << "\n";

    ob2 = ob1; // присваиваем объект ob1 объекту ob2
    cout << "ob1 now: " << endl;
    ob1.showab();
    cout << "\n";
    cout << "ob2 now: " << endl;
    ob2.showab();
    cout << "\n";

    ob1.setab(-1, -1); //изменяем объект ob1
    cout << "ob1 after changing: " << endl;
    ob1.showab();
    cout << "ob2 after changing: " << endl;
    ob2.showab();
}