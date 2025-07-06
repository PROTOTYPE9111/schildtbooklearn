//schiltbooklearn (p.253)
//разные варианты функции min

#include <iostream>
using namespace std;

int min(int a, int b);
char min(char a, char b);
int * min(int *a, int *b);

int main(){
    int i = 10, j = 22;

    cout << "min('X', 'a'): " << min('X', 'a') << endl; 
    cout << "min(9,3): " << min(9,3) << endl; 
    cout << "*min(&i, &j): " << *min(&i,&i) << endl;
    return 0;
}

// Функция min() для int возвращает наименьшее значение
int min(int a, int b) {
    if(a < b) return a;
    else return b;
}
// Функция min() для char 
char min(char a, char b){
    if(tolower(a)< tolower(b)) return a;
    else return b;
}
// Функция для указателей int. Сравнивает адресуемые значения и возвращает на наименьшее значение
int * min(int *a, int *b){
    if (*a < *b) return a;
    else return b;
}
