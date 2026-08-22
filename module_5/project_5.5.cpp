#include <iostream>
using namespace std;

int box(int length, int width, int height); //объем

int main(){
    int answer;

    answer = box(10,11,3);//возвращаемое значение присваивается переменной
    cout << "The volume is " << answer;

    return 0;
}

int box(int length, int width, int height){
    return length * width * height;
}