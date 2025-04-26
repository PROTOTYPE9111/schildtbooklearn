//schildtbooklearn (p.227)
// Пример рекурсии 
#include <iostream>
using namespace std;

int factr(int n); 
int fact(int n);
int main(){
// Использование рекурсивной версии 
cout << "4 factorial is " << factr(4);
cout <<'\n';

// Использование итеративной версии 
cout << "4 factorial is " << fact(4); 
cout << '\n';
return 0;
}

//рекурсивная версия

int factr(int n){
    int answer;
    if (n==1) return (1);
    answer = factr(n-1)*n;
    return (answer);
}
int fact(int n){
    int t, answer;
    answer = 1;
    for(t=1; t<=n; t++) answer = answer*(t);
    return (answer); 
}