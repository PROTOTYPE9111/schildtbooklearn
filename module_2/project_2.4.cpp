//shildtbooklearn (p.81)
//bool

#include <iostream>

using namespace std;

int main(){
    bool b;

    b = false;
    cout << "b is " << b << "\n";

    b = true;
    cout << "b is " << b << "\n";

    //логическое значение может управляться оператором if

    if(b) cout << "This is executed.\n";// // //
                                              //
    b = false;                                // // одно логическое значение может управлять ifом
                                              //
    if(b) cout << "This is not executed.\n";  // 

    // результат выполнения операции отношения будет true или false
    cout << "10 > 9 is " << (10 > 9) << "\n";

    return 0;
}