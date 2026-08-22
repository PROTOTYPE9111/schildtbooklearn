#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char str1[80];
    char str2[80];
    char *p1, *p2;
    
    cout <<"Первая строка " << endl;
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    
    p1 = str1;
    p2 = str2;

    //повторяем цикл

while (*p1 && *p2){
    if (tolower(*p1) != tolower(*p2)) break;
    else{
        p1++;
        p2++;
    }
}
//строки одинаковые если указыыают на символ

if(!*p1 && !*p2)
    cout << "String are the same except for " << 
        "possible case differences." << endl;
    else 
        cout << "Strings differ" << endl;
}