//schildbooklearn (p.258)
// создание перезагруженных функций вывода

#include <iostream> 

using namespace std;

    // эти функции обеспечивают после вывода аргумента переход на новую строку

    void println(bool b);
    void println(int i);
    void println(long i);
    void println(char ch);
    void println(char *str);
    void println(double d);

    //эти функции не переводят после вывода на новую строку
    void print(bool b);
    void print(int i);
    void print(long i);
    void print(char ch);
    void print(char *str);
    void print(double d);

    int main(){
        println(true);
        println(10);
        println("This is a test");
        println('x');
        println(99L);
        println(123.3);

        print("Here are some values: ");
        print (false);
        print(' ');
        print(88);
        print(' ');
        print(100000L);
        print (' ');
        print(100.01);
        println(" Done! ");
        return 0;

    }
    //набор перегруженных функций println()
    void println (bool b){
        if(b) cout << "true\n";
        else cout << "false\n";
    }
    void println(int i){
        cout << i << endl;
    }
    void println(long i){
        cout << i << endl;
    }
    void println(char ch){
        cout << ch << endl;
    }
    void println(char *str){
        cout << str << endl;
    }
    void println(double d){
        cout << d << endl;
    }

    void print(bool b){
        if(b) cout << "true";
        else cout << "false";
    }
    void print(int i){
        cout << i;
    }
    void print(long i){
        cout << i;
    }
    void print(char ch){
        cout << ch;
    }
    void print(char *str){
        cout << str;
    }
    void print(double d){
        cout << d;
    }

