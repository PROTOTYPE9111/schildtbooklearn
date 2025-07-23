//schildtbooklearn (p.330)
// параметризированный конструктор

#include <iostream>
using namespace std;

class Myclass {
    public:
    int x;

    Myclass(int i);
    ~Myclass();
};

//реализация параметризованного конструктора 
Myclass::Myclass(int i){
    x = i;
}
// деструктор
Myclass::~Myclass(){
    cout << "Destructing object whose x is " << x << endl;
}

int main(){
    Myclass t1(5);
    Myclass t2(19);

    cout << t1.x << " " << t2.x << endl;
    
    return 0;
}