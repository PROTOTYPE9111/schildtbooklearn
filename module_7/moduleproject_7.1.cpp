//schildbooklearn (p. 297)
// создание функций побитового циклического сдвига

#include <iostream>
using namespace std;

unsigned char lrotate(unsigned char val, int n);
unsigned char rrotate(unsigned char val, int n);
void show_binary(unsigned int u);

int main(){
    char ch = 'T';

    cout << "Original value in binary:\n";
    show_binary(ch);
    
    cout << "Rotating right 8 times:\n";
    for(int i = 0; i < 8; i++){
        ch = rrotate(ch, 1);
        show_binary(ch);
    }

    cout << "Rotating left 8 times:\n";
    for (int i = 0; i < 8; i++){
        ch = lrotate(ch, 1);
        show_binary(ch);
    }
    return 0;
}

unsigned char lrotate(unsigned char val, int n){
    unsigned int t;

    t = val;

    for (int i = 0; i < n; i++){
        t = t << 1;
        /*
        Если выдвигаемый бит (8-й бит значения t)
        содержит единицу, то устанавливаем младший бит
        */
       if (t & 256)
       t = t | 1; // Устанавливаем 1 на правом конце 

    }
    return t;  // возвращаем младше 8 бит 
}

unsigned char rrotate(unsigned char val, int n){
    unsigned int t;

    t = val;
    t = t << 8;

    for (int i = 0; i < n; i++){
        t = t >> 1;
       
/*После сдвига бита вправо на 1 бит он становится
7-м битом целочисленного значения t . Если 7-й бит равен 1 , то нужно установить крайний слева бит. */
       if (t & 128)
       t = t | 32768; // устанавливаем 1 с левого конца

    }
    t >> 8;
    return t;  
}

void show_binary(unsigned int u){
    int t;

    for(t = 128; t > 0; t = t/2)
    if (u & t) cout << "1 ";
    else cout << "0 ";
    cout << "\n";
}