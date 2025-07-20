//schildtbooklearn (p. 294)
// шифрование

#include <iostream>
using namespace std;

int main(){
    char msg[] = "This is a test";

    char key = 88;

    cout << "Original message: " << msg << "\n";

    for(int i = 0 ; i < strlen(msg); i++)
    msg[i] = msg[i] ^ key; // кодируем

    cout << "Encoded message: " << msg << endl;

    for(int i = 0; i < strlen(msg); i++)
    msg[i] = msg[i] ^ key; // декодируем
    cout << "Decoded message: " << msg << endl;
    return 0;
}


/* 
Комментарий от меня: Операция `XOR` (исключающее ИЛИ) обладает важным свойством: 
Если сделать `A ^ B = C`, то потом снова сделать `C ^ B` — получится исходное `A`.
*/