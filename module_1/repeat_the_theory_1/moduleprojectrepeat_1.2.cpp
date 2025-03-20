// shildtbooklearn (p.62)
//построение таблиц конвертации футов в метры
#include <iostream>

using namespace std;

int main() {
    double f;
    double m;
    int counter;
    counter = 0;

   for (f = 1; f <= 100; f++){
    m = f / 3.28; // а дальше уже даем условие какое выполняется
    cout << f << " feet is " << m << " meters. \n";

counter++;

    if(counter == 10){
        cout << "\n";
        counter = 0;
    }
   
   }
   return 0;
}