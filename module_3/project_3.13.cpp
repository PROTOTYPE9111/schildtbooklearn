//schildtbooklearn (p.126)
// цикл без тела

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int i;
    int sum = 0;
    //суммирую числа от 1 до 10
    for(i = 1; i <=10; sum += i++); //бестелесный цикл. Тут постфикс поэтому программа берет сначала 1 и прибавляет 2 и потом сохраняет предыдущее значение потом дальше 2+1 = 3 сохраняем 2 далее 3+1 = 4 и так далее

    cout << "Sum is " << sum;
    return 0;
}