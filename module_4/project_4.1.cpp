#include <iostream>
using namespace std;

int main(){
    int sample [10]; //резервация области памяти для 10 элементов массива типа int
    int t;
    //загрузка массива
    
    for (t = 0; t < 10; t++) sample [t] = t;

    //отображение содержимого
    for (t = 0; t < 10; ++t)
    cout << "This is sample [" << t << "]: " << sample [t] << endl;
    
    return 0;
}