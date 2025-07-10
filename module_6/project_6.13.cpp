// schildtbooklearn (p. 265)
// пользовательская функция strcat()


// создаем mystrcat()
#include <iostream>
#include <cstring>

using namespace std;

void mystrcat(char *s1, char *s2, int len = 0);

int main(){
    char str1[80] = "This is a test";
    char str2[80] = "0123456789";

    mystrcat(str1, str2, 5); // контактенируем 5 символов
    cout << str1 << endl;

    strcpy(str1, "this is a test"); //восстанавливаем strl

    mystrcat(str1, str2); // контактенируем всю строку
    cout << str1 << endl;
    
    return 0;
}

//версия фукнции mystrcat()

void mystrcat(char *s1, char *s2, int len){
    //находим конец строки s1
    while(*s1) s1++;

    if (len == 0) len = strlen(s2);

    while (*s2 && len){
        *s1 = *s2; // копируем символы
        s1++;
        s2++;
        len--;
    }
    *s1 = '\0';

}