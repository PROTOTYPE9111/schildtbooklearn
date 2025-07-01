//schildtbooklearn (p.247)
// Пример функции, возвращающей ссылку на элемент массива

#include <iostream>
using namespace std;

double &change_it(int i); 

double vals[] = { 1.1, 2.2, 3.3, 4.4, 5.5}; // глобальный массив
int main(){
    int i;
    
    cout << "Original values: " << endl;
    for (i = 0; i < 5; i++){
        cout << vals[i] << endl;
    }
    change_it(1) = 5123.1;
    change_it(3) = 123;
    cout << "Changed values list: " << endl;
    for (i = 0; i < 5; i++){
        cout << vals[i] << endl;
    }

}
double &change_it(int i){
    return vals[i]; // возвращаем ссылку на 1-й элемент
}