//schildtbooklearn (p.230)
//алгоритм быстрой сортировки Ч.Э.Хоара

#include <iostream>
#include <cstring>
using namespace std;

void quicksort(char *items, int len);
void qs (char *items, int left, int right);

int main(){
    char str[] = "jfmckldoelazlkper";
    cout << "Original: " << str << "\n";
    quicksort(str, strlen(str));
    cout << "Sorted: " << str << endl;
}

void quicksort(char *items, int len){
    qs(items, 0, len-1);
}
// Рекурсивная версия алгоритма быстрой сортировки символов
void qs(char *items, int left, int right)
{
    int i, j;
    char x, y;

    i = left; j = right;
    x = items[(left+right) / 2];

    do {
        while((items[i] < x) && (i < right)) i++;
        while((x < items[j]) && (j > left)) j--;

        if(i <= j) {
            y = items[i];
            items[i] = items[j];
            items[j] = y;
            i++; j--;
        }
    } while(i <= j);

    if(left < j) qs(items, left, j);
    if(i < right) qs(items, i, right);
}