#include <iostream>

using namespace std;

int main(){
    int i,j;
    double nums[] = {1,2,3,4,5,6,7,8,9,10};

    
    for(i = 0; i < 10; i++){
        for (j = i + 1; j < 10; j++){
            if (nums[i] == nums[j]){
                cout << "Duplicate: " << nums[i] << endl;
            }
    }
}
    return 0;
}