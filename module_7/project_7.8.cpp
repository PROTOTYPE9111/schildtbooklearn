//schildtbooklearn (p. 296)
// Пример выполнения побитового сдвига 

#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main(){
    int i = 1, t;
    //сдвиг влево
    for(t = 0; t < 8; t++){
        show_binary(i);
        i = i << 1; //свдвиг влево на 1 
    }
    cout << "\n";

    //сдвиг вправо
    for(t = 0; t < 8; t++){
        i = i >> 1; //свдвиг вправо на 1 
        show_binary(i);  
    }
    return 0;
    }

    // Отображение битов, составляющих байт
    void show_binary(unsigned int u){
        int t;
        for(t = 128; t > 0; t = t/2)
        if (u & t) cout << "1 ";
        else cout << "0 ";
        cout << endl;
    }