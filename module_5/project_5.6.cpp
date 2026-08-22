#include <iostream>
using namespace std;

double box(double length, double width, double height); //объем

int main(){
    double answer;

    answer = box(10.1,11.2,3.3);//возвращаемое значение присваивается переменной
    cout << "The volume is " << answer;

    return 0;
}

double box(double length, double width, double height){
    return length * width * height;
}