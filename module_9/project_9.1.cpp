//schildtbooklearn (p.352)
// Перегрузка конструкторов

#include <iostream>
using namespace std;

class MyClass{
    public:
    int x;
    int y;
    //перегрузка конструктора 

    MyClass(){ x = y = 0;}

    // 1 параметр
    MyClass(int i) { x = y = i;}

    //несколько 
    MyClass(int i, int j) { x = i; y = j;}

};
int main(){
    MyClass t;
    MyClass t1(5);
    MyClass t2(9, 10);

    cout << "t.x: " << t.x << ", t.y: " << t.y << endl;
    cout << "t1.x: " << t1.x << ", t1.y: " << t1.y << endl;
    cout << "t2.x: " << t2.x << ", t2.y: " << t2.y << endl;
    
    return 0;
}