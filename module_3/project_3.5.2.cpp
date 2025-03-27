//schildtbooklearn (p.115-116)
//а что если сделать с брейком?
#include <iostream>

using namespace std;

int main(){
    int i;
for(i=0; i<5; i++){ 
    switch(i) {
        case 1: cout << "less than 1\n";
        case 2: cout << "less than 2\n"; 
        case 3: cout << "less than 3\n";
        break;
        case 4: cout << "less than 4\n";
        case 5: cout << "less than 5\n";
}
    cout << '\n';
}
return 0;
}


/*
а здесь уже другое потому что у нас есть brake и все будет обрываться на 3 
1 => 1 2 3 
2 => 2 3 
3 => 3 
4 => 4 5 (тут уже видно что break нет и спокойно как в примере 3.5.1)
*/