#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    char str[80];
    int i;
    int count;

    strcpy(str, "Test");
    count = 0;

    for (i = 0; str[i]; i++)
        if(isupper(str[i])) count++;
    
    cout << str << " содержит " << count << " заглавных букв";

}