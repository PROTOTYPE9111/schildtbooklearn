//schildtbooklearn (p.175)
// присваивание, инкременирование и декременирование

#include <iostream>
using namespace std;

int main(){
    int *p, num;

    p = &num;
    
    *p = 100;
    cout << num << endl;
    (*p)++; 
    cout << num << endl;
    (*p)--;
    cout << num << endl;
}