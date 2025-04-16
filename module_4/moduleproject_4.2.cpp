//schildtbooklearn (p.186)
//Реверсирование содержимого строки "no месту"

#include <iostream> 
#include <cstring> 

using namespace std;

int main() {
    char str[] = "this is a test"; 
    char *start, *end;
    int len;
    char t;
    cout << "Original: " << str << endl;
    
    len =strlen(str);
    start = str;
    end = &str[len-1];
    while(start < end) {   //обмен символов 
        t = *start; 
        *start = *end; 
        *end = t;
        //настройка указателей
        start++;
        end--;
    }
    cout << "Reversed: "<< str << "\n";

}