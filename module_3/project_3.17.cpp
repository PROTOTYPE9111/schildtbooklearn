//schildtbooklearn (p.135)
// break пример когда обрыв на 10 

#include <iostream>

using namespace std;

int main(){
    int t;
    // Цикл работает для значений от 0 до 9, а не до 100
    for (t = 0; t < 100; t++){
        if (t==11) break; // обрыв на 10
        cout << t << endl;
    }
return 0;
}