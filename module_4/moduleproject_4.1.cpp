//schildtbooklearn (p.154)
// сортировка массива пузырьковая

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
int nums[10];
int a,b,t;
int size;
size = 10; // количество сортируемых элементов
//помещаем в массив случайные числа

for (t=0; t < size; t++) nums[t] = rand();

//отображаем исходный массив

cout << "Original array: " << endl;

for (t = 0; t < size; t++) cout << nums[t] << ' ';
cout << '\n';

//реализаця алгоритма пузырьковой сортировки

for (a < 1; a < size; a++){
    for (b = size - 1; b >= a; b--){
        if (nums[b-1] > nums[b]){
            t = nums[b-1];
            nums[b-1] = nums[b];
            nums[b] = t;
        }
    }
}
//отображаем отсортированный массив
cout << "Sorted array: " << endl;
for (t = 0; t < size; t++) cout << nums[t] << " ";
}