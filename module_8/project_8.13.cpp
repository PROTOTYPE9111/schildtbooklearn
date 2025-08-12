//schildtbooklearn (p.347)
// Инкрементация и декрементация указателя на объект

#include <iostream>
using namespace std;

class P_example{
    int num;
    public:
    void set_num(int val) { num = val; }
    void show_num(){ cout << num << endl; }
};
int main(){
    P_example ob[2], *p; 
    ob[0].set_num(10); 
    ob[1].set_num(20); 

    p = &ob[0]; // Получаем указатель на первый элемент
    p->show_num(); // Отображаем значение элемента
    
    p++; // Переходим к следующему объекту
    p -> show_num(); // Отображаем значение элемента

    p--; // Возвращаемся
    p -> show_num(); // Снова отображаем значение элемента

    return 0;
}