//schildtbooklearn (p.169)
//телефонный справочник

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int i;
    char str[80];
    char numbers[10][80] = {
        "Tom", "555-3322", 
        "Mary", "555-8976",
        "Jon", "555-1037",
        "Rachel", "555-1400",
        "Sherry", "555-8873"
    };
    cout << "Enter name: ";
    cin >> str;
    
    for(i=0; i<10; i += 2){
        if (!strcmp(str, numbers[i])){
            cout << "Number is " << numbers[i+1] << endl;
            break; 
        }
    }
    if(i == 10) cout << "Not found.\n";

}