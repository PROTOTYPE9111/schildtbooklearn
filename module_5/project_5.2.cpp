#include <iostream>

using namespace std;

void box(int lenght, int width, int height); //прототип функции

int main(){
    box(7,20,4);
    box(50,3,2);
    box(8,6,9);
    return 0;
}
//вычисление объема параллелепипеда

void box(int lenght, int width, int height){
    cout << "volume of box is " << lenght * width * height << endl;
}