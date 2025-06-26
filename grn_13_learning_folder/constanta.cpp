#include <iostream>
using namespace std;
int main()
{
cout << "one\ttwo\tthree\n"; // эта шляпа \t делает горизонтальные отступ, ахуеть. 
cout << "123\b\b45"; // а тут хуй знает как получается 145 после компиляции. видимо, стирает предыдущие два числа. 
return 0;

}