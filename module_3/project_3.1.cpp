// shildtbooklearn (p.108)
// игра "угадай магическое число"

#include <iostream>
#include <cstdlib> // для rand() функции

using namespace std;

int main(){
    int magic; // число компа
    int guess; // мое число 
    
    magic = rand() % 10; //я здесь сам улучшил и сделал размах до 10 чисел, чтобы не было много

    cout << "Enter your number: ";
    cin >> guess;

    if (magic == guess){
        cout << "**RIGHT**";
    }
    else {  //добавил по своему else чтобы выводилось что я не угадал
        cout << "**YOU LOSE**";
    }
}