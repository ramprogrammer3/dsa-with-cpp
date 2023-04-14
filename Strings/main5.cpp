#include <iostream>
#include <cstring>
using namespace std;

void convertIntoUpperCase(char word[]){

    int n = strlen(word);

    for(int i = 0; i<n; i++){
        word[i] = word[i] - 'a' + 'A';
    }
}

int main(){

    char word[100] = "ramkumar";

    convertIntoUpperCase(word);

    cout << word << endl;

    return 0;
}