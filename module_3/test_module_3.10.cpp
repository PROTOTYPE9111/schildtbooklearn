//schildtbooklearn (p.144)
/* Инкрементное выражение в цикле for необязательно должно менять зна­ чение переменной цикла
 на фиксированную величину. Переменная цикла может изменяться произвольно. 
 С учетом этого напишите программу, кото­ рая использует цикл for, 
 чтобы сгенерировать и отобразить прогрессию 1, 2, 4, 8, 16, 32 и т. д.
 */

 #include <iostream>

 using namespace std;
 
 int main() {
     for (int x = 1; ; x < 1000) {
         cout << x << " ";
         x *= 2;
     }
     cout << endl;
     return 0;
 }