#include <iostream>
using namespace std;
int main() {

double distance;
double lightspeed;
double delay;
double delay_in_min;
double reply;
double reply_in_min;

distance = 34000000.0; //34000000 миль
lightspeed = 186000.0; // 186000 миль в секунду

delay = distance / lightspeed;
cout << "Time delay when talking to Mars: " << delay << " seconds.\n";
delay_in_min = delay / 60.0;
cout << "This is " << delay_in_min << " minutes.\n";

reply = delay * 2.0;
cout << "Reply in sec " << reply << " seconds\n";
reply_in_min = reply / 60.0;
cout << "This is " << reply_in_min << " minutes";


return 0;
}