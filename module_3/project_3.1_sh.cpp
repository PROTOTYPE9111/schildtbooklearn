// shildtbooklearn (p.108)
// игра "угадай магическое число" по шилдту

#include <iostream>
#include <cstdlib> 

using namespace std;

int main(){
    int magic; 
    int guess; 
    
    magic = rand();

    cout << "Enter your guess: ";
    cin >> guess;

    if (guess == magic) cout << "**RIGHT**";
    else cout << "...Sorry, you are wrong.";

    return 0;
}