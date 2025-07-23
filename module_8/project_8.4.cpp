//schildtbooklearn (p.327)
// конструкторы и деструкторы

#include <iostream>
using namespace std;

class Myclass{
    public:
        int x;

        //Объявляем конструктор и деструктор 
        Myclass(); // конструктор
        ~Myclass(); // деструктор
};
// Реализатор конструктора 
Myclass::Myclass(){
    x = 10;
}
// Реализатор деструктора
Myclass::~Myclass(){
    cout << "Destructing...\n";
}

int main(){
    Myclass ob1;
    Myclass ob2;
    Myclass ob3;
    cout << ob1.x << " " << ob2.x << ob3.x << endl;
    return 0;

}