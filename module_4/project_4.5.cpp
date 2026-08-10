#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
    char s1[80], s2[80];

    strcpy(s1, "C++");
    strcpy(s2, " is a legend");

    cout << "lengths: " << strlen(s1);
    cout << ' ' << strlen(s2) << endl;

    if(!strcmp(s1,s2))
        cout << "The strings are equal" << endl;
    else cout << "not equal" << endl;

    strcat(s1,s2);
    cout << s1 << endl;

    strcpy(s2,s1);
    cout << s1 << " and " << s2 << endl;

    if(!strcmp(s1,s2))
        cout << "s1 and s2 are now the same" << endl;
    return 0;
}