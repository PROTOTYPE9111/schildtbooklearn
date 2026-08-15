#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char *p;
    char str[80] = "This Is A Test";
    cout << "Original string: " << str << endl;
    p = str; // присваиваем указателю p адрес начала массива

    while(*p){
        if(isupper(*p))
            *p = tolower(*p);
        else if(islower(*p))
            *p = toupper(*p);
        p++;
    }
    cout << "Inverted: " << str;

    return 0;
}