//schildtbooklearn (p.197)
//через фукнцию находим объем параллелепипеда

#include <iostream>
using namespace std;
void box(int length, int width, int height);

int main(){
    box (7,20,4);
    box(50,3,2);
    box(8,6,9);
}

void box(int length,int width, int height){
    cout << "Volume of box is " << length * width * height << endl;
}