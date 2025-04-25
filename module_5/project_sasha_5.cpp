#include <iostream>
using namespace std;

void swap(int* f, int* z);

int main(){
    int f = 1;
    int z = 2;
    swap(f,z);
    cout << f << z;
}

void swap(int* f, int* z){
    int buf;
    buf = *f; 
    *f = *z;
    *z = buf;
}