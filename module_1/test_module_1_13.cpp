//shildtbooklearn (p.70)
//задание для контроля по модулю 1 повторение (код по итогу не совпадает с ответом.Я делал по своему) 
/*
Гравитация Луны равна около 17 % гравитации Земли. Напишите программу, которая будет генерировать 
таблицу земных фунтов и эквивалентных им значений в лунном весе. 
Таблица должна включать значения от 1 до 100 фунтов и пустые строки после каждых 25 строк результатов.
*/

#include <iostream>

using namespace std;

int main(){
    double moon; //переменная гравитации луны
    double earth; // переменная гравитации земли
    
    int counter;
    counter = 0; // начальная установка счетчика строк = 0
    for (earth = 1.0; earth  <= 100.0; earth++) {
        moon = (17.0 / 100.0) * earth;
        cout << earth << " earth pounds is " << moon << "moon pounds. \n";
        
       
     counter++; // после каждой итерации цикла мы инкрементируем счетчик слов

        //после каждой 25 строки выводим пустую по заданию

        if (counter == 25) {
            cout << "\n"; //пустую строку выводим
            counter = 0; //сбрасываем счетчик и обнуляем
        } 
    }
    return 0;
}