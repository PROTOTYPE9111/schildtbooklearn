#include <iostream> 
using namespace std;

int main(){
    int i, avg, min_val, max_val;
    int nums[10];

    nums[0] = 10;
    nums[1] = 18;
    nums[2] = 75;
    nums[3] = 0;
    nums[4] = 1;
    nums[5] = 56;
    nums[6] = 100;
    nums[7] = 12;
    nums[8] = -19;
    nums[9] = 88;

    //вычисление среднего значения

    avg = 0;
    for(i = 0; i < 10; i++)
        avg += nums[i]; // суммируем значение в массиве
    avg /=10; //среднее вычисляем значение

    cout << "Average is " << avg << endl;

    // Определяем мин и макс 

    min_val = max_val = nums[0];
    for(i = 1; i < 10; i++){
        if(nums[i] < min_val) min_val = nums[i];
        if(nums[i] > max_val) max_val = nums[i];
    }

    cout << "Min: " << min_val << endl;
    cout << "Max: " << max_val << endl;
    
    return 0;

}

