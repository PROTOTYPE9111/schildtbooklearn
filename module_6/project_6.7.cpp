// schildtbooklearn (p.249)
// независимые ссылки

#include <iostream>
using namespace std;

int main(){
    int j,k;
    int &i = j; // независимая ссылка
     
    j = 10;
    cout << j << " " << i << endl; // показывает 10 10

    k = 121;
    i = k; // из k копируем в j
    cout << j << endl; // 121 выводится
    
    return 0;

}