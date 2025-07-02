//schildtbooklearn (p.247)
// Пример функции, возвращающей ссылку на элемент массива

#include <iostream>
#include <random>
using namespace std;

double &change_it(int i); 

double vals[] = { 1.1, 2.2, 3.3, 4.4, 5.5}; // глобальный массив
int main(){
    int i;
    
    cout << "Original values: " << endl;
    for (i = 0; i < 5; i++){
        cout << vals[i] << endl;
    }
    int random_index = rand() % 5; // случайный индекс от 0 до 4
    change_it(random_index) = rand() % 101; // присваиваем случайное значение элементу массива

    cout << "Changed values list: " << endl;
    for (i = 0; i < 5; i++){
        //change_it(i) = rand();
        cout << vals[i] << endl;
    }

}
double &change_it(int i){
    return vals[i]; // возвращаем ссылку на 1-й элемент
}
