//shildtbooklearn (p.82)
//задача на вычисление (расстояние между планетами / на скорость света)
// Какова временная задержка между отправкой сигнала с Земли и его приходом на Марс?

#include <iostream>

using namespace std;

int main(){
    double distance;
    double lightspeed;
    double delay;
    double delay_in_min;

    distance = 34000000.0; // миль 
    lightspeed = 186000.0; // миль в сек

    delay = distance / lightspeed;
    cout << "Time delay while talking to Mars: " << delay << " seconds.\n";
    
    delay_in_min = delay / 60.0;
    cout << "This is " << delay_in_min << " minutes.";

    return 0;
}