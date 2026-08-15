// преобразование 
#include <iostream>
using namespace std;

int main(){
    int *p, num;


    *p = 100; // присваиваем переменной num 100 через указатель р
    cout << num << ' ';
    (*p)++; //инкрементируем значение нум через указатель р
    cout << num << ' ';
    (*p)--;
    cout << num << endl;
    
    return 0;


}