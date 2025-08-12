//schildtbooklearn (p.347)
// Указатели на объекты

#include <iostream>
using namespace std;

class P_example{
    int num;
    public:
    void set_num(int val) { num = val; }
    void show_num(){ cout << num << endl; }
};
int main(){
    P_example ob, *p; // Объявляем объект и указатель на него
    ob.set_num(1); // Получаем прямой доступ к объекту ob
    ob.show_num(); 

    p = &ob; // Присваиваем указателю p адрес объекта ob
    p -> set_num (20); // Вызываем функции с использованием указателя
    p -> show_num();
}