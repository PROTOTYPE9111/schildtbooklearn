// schildtbooklearn (p.116)
// пустые switch мой пример 

#include <iostream>

using namespace std;

int main(){
    int i;
for(i=0; i<6; i++){ 
    switch(i) {
        case 1:
        case 2: 
        case 3: cout << "less than 4\n";
        break;
        case 4: cout << "i is 4\n";
        break;
        case 5: cout << "i\n";
        
    }
}
return 0;
}