//schildtbooklearn (p.115-116)
// пример switch без brake 

#include <iostream>

using namespace std;

int main(){
    int i;
for(i=0; i<5; i++){ 
    switch(i) {
        case 1: cout << "less than 1\n";
        case 2: cout << "less than 2\n"; 
        case 3: cout << "less than 3\n";
        case 4: cout << "less than 4\n";
        case 5: cout << "less than 5\n";
}
    cout << '\n';
}
return 0;
}


/*
в данном коде сразу видно что постоянно выполняются все части 
у нас тут идет цикл и если посмотреть на вывод там как бы разделено по блокам
сначала пошла цифра 1 и там выводится все case от 1 до 5
потом 2 и там от case 2 до 5 
потом 3 и от 3 до 5 и так далее.
*/