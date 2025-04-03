// Программа "Угадай магическое число: тест человеческих возможностей"
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int magic;         // магическое число
    int guess;         // предполагаемое пользователем
    
    magic = rand();    // получаем случайное магическое число
    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        
        if (guess == magic) {
            cout << "** Right **";
            cout << magic << " is the magic number.\n"; 
        } 
        else {
            cout << "... sorry, you're wrong.\n";
            
            if (guess > magic) 
                cout << "Your guess is too high.\n";
            else cout << "Your guess is too low.\n";
        }
    } while (guess != magic);
    
    return 0;
}