#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
int magic; // магическое число
int guess; // предположение пользователя
magic = rand(); //получаем случайное число 

cout << "Enter your guess: ";
cin >> guess; 

if (guess == magic) cout << "** RIGHT **";

else cout << "...Sorry, you're wrong.";


return 0;


}