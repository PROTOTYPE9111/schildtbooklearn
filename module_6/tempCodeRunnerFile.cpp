//schildtbooklearn (p.246)
// возврат ссылок

#intclude <iostream>
using namespace std;

double &f(); // возврат ссылки на double

double val = 100.0;

int main(){
    double x;

    cout << f() << endl; // отображаем значение val

    x = f(); // присваиваем x значение val
    cout << x << endl; // отображаем значение x

    f() = 99.1; //изменяем значение глобальной переменной val
    cout << f() << endl; // новое значение val
    return 0;

}
// Эта функция возвращает ссылку на double
double &f(){
    return val;
}