#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char *dictionary[][2] = {
        "pencil", "A writing instrument",
        "keyboard", "An input device",
        "rifle", "A shoulder-fired firearm",
        "airplane", "A fixed-wing aircraft",
        "network", "A group of PCs",
        "", ""
    };
    char word[80];
    int i;
    cout << "Enter word: ";
    cin >> word;

    for (i = 0; *dictionary[i][0]; i++){
        if(!strcmp(dictionary[i][0], word)){
        cout << dictionary[i][1] << endl;
        break;
    }
}
    if (!*dictionary[i][0])
        cout << word << " not found" << endl;
    return 0;
}