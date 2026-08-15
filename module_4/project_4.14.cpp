#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char *p;
    int i;
    char str[80] = "This Is A Test";
    cout << "Original string: " << str << endl;
    p = str; // присваиваем указателю p адрес начала массива

    //индексирование указателя р

    for (i = 0; p[i]; i++){
        if(isupper(p[i]))
            p[i] = tolower(p[i]);
        else if(islower(p[i]))
            p[i] = toupper(p[i]);
    }
    cout << "Inverted: " << str;

    return 0;
}