//schildtbooklearn (p.216)
// Изменение содержимого массива с помощью функции

#include <iostream>
using namespace std;

void cube(int *n, int num);

int main(){
    int i, nums[10];
    for(i = 0; i < 10; i++) nums[i] = i+1;

    cout << "Original: ";
    for (i = 0; i < 10; i++) cout << nums[i] << endl;
    cout << '\n';

    cube(nums, 10); // вычисляем  кубы значений в первом пишем адрес а во втором пишем размер массива

    cout << "Altered: "; 
    for (i = 0; i < 10; i++) cout << nums[i] << endl;
}

// возводим в куб элементы массива

void cube(int *n, int num){
    while(num){
        *n = *n * *n * *n;
        num--;
        n++;
    }
}
