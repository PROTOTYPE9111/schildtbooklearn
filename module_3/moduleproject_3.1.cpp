// schildtbooklearn (p.118)
// делаем справочную систему

#include <iostream>

using namespace std;

int main(){
    char choice;
    cout << "**** Main Menu ****\n";
    cout << "   1. if\n";
    cout << "   2. switch\n";
    cout << "Choose one\n";
    cin >> choice;

    switch (choice) {
        case '1': 
            cout << "The if: \n\n";
            cout << "if (condition) statement; \n";
            cout << "else statement;\n";
            break;
        case '2':
            cout << "The switch: \n\n";
            cout << "switch(expression) {\n";
            cout << "   case constant:\n";
            cout << "     statement sequence\n";
            cout << "     break;\n";
            cout << "   //...\n";
            cout << "}\n";
            break; 
        default:
        cout << "Selection not found.\n";

    }
return 0;
}