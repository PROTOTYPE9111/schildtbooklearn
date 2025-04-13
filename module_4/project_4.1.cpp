//shildtbooklearn (p.148)
//делаем массивы от 0 до 9 

#include <iostream>

using namespace std;

int main() {
    int sample[10];
    int t;
    //загрузка массива

    for (t = 0; t < 10; t++) sample [t] = t; 
    
    //отображение содержимого массива
    for (t = 0; t< 10; t++)
        cout <<  "This is sample [" << t << "]: " << sample[t] << endl;
    return 0;
}