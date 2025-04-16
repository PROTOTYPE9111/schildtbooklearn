//schildtbooklearn (p.180)
// реверсирование регистра букв через индексирование массивов

#include <iostream>
#include <cctype>

using namespace std;

int main(){
    int i;
    char str[80] = "This Is A Test";
    cout << "Original: " << str << endl;

    for (i = 0; str[i]; i++){
        if (isupper(str[i])) str[i] = tolower(str[i]);
        else if (islower(str[i])) str[i] = toupper(str[i]);
    }
    cout << "Reversed: " << str << endl;
}
