//shildtbooklearn (p.149)
//вычисление среднего и определение мин и макс из набора значений

#include <iostream>

using namespace std;

int main(){
    int i, avg, min, max;
    int nums[10];
    nums [0] = 10; 
    nums[1] = 18; 
    nums[2] = 75; 
    nums[3] = 0;
    nums[4] = 1;
    nums[5] = 56;
    nums[6] = 100;
    nums[7] = 12;
    nums[8] = -19;
    nums[9] = 88;

    avg = 0;

    for (i = 0; i < 10; i++){
        avg += nums[i];
    }
    avg /= 10; // вычисляем среднее
    cout << "average: " << avg << endl;

    // min max

    min = max = nums[0];
    for (i = 1; i < 10; i++){
        if (nums[i] < min) min = nums[i];
        if (nums[i] > max) max = nums[i];
    }
    cout << "Min value " << min << endl;
    cout << "Max value " << max << endl;
}