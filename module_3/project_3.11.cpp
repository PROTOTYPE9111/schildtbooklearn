//schildtbooklearn (p.123)
// rand() пытается попасть в значение больше 20к, считаем также попытки 

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int i;
    int r;

    r = rand();

    for(i = 0; r <= 20000; i++){
        r = rand();
    }
       
     cout << "Number is " << r << " It was generated on try " << i << ".";
     
     return 0;
}