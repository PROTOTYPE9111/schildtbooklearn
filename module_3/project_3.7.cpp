// schildtbooklearn (p.121)
// Вывод значений квадратного корня из чисел от 1 до 99 #include <iostream>
#include <iostream>
#include <cmath> 

using namespace std;


int main() {
    int num;
    double sq_root;

    for(num=1; num < 100; num++) {
        sq_root = sqrt((double) num); //привожу к double типу 
        cout << num << " " << sq_root << '\n';
}
return 0;
}