// schildtbooklearn (p.339)
// Создание класса очереди
#include <iostream>
using namespace std;

const int maxSize = 100;

class Queue {
    char q[maxSize]; // массив на котором строится очередь
    int size; // макс число элементов в очереди
    int putloc, getloc; // индексы записи и чтения
    public: 
    // конструтор очереди 
    Queue(int len){
        // очередь должна быть только положительная и меньше максимума
        if (len > maxSize) len = maxSize;
        else if (len <= 0) len = 1;
        size = len;
        putloc = getloc = 0;
    }
    // Функция внесения элемента в очередь
    void put(char ch){
        if (putloc == size) {
            cout << " -- Queue is full.\n";
            return ;
        }
        putloc++;
        q[putloc] = ch;
    }
    // Функция считывания символа из очереди
    char get(){
        if (getloc == putloc){
            cout << " -- Queue is empty.\n";
            return 0;
        }
        getloc++;
        return q[getloc];
        
    }

    };
    int main(){
        Queue bigQ(100);
        Queue smallQ(4);
        char ch;
        int i;

        cout << "Using biQ to store the alphabet.\n";
        // Помещаем ряд чисел в очередь bigQ
        for(i = 0; i < 26; i++)
            bigQ.put('A' + i);

        //Считываем и отображаем элементы из очереди bigQ
        cout << "Contents of bigQ: ";
        for(i=0; i < 26; i++){
            ch = bigQ.get();
            if(ch !=0) cout << ch;
        }
        cout << "\n\n";
        cout << "Using smallQ to generate errors.\n";
        //Очередь smallQ для генерирования ошибок 
        for (i = 0; i < 5; i++){
            cout << "Attempting to store " << (char) ('Z' - i);
            smallQ.put('Z' - i);

            cout << "\n";
        }
        cout << "\n";

        //Генерирование ошибок при считывании элементов из очереди 
        cout << "Contents of smallQ: ";
        for (i = 0; i < 5; i++){
            ch = smallQ.get();
            if (ch != 0) cout << ch;
        }
        cout << "\n";
    }
    
