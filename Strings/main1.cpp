#include <iostream>
// #include <strings.h>
using namespace std;

int getlength(char name[]){
    int length = 0;
    int i = 0;


    while(name[i] != '\0'){
        length++;
        i++;
    }

    return length;
}

int main(){

    char name[100];


    // cin >> name;
    // getline(cin,name);

    cin.getline(name, 100);

    int lengthOfname = getlength(name);
    
    cout << "length of name is " << lengthOfname << endl;

    cout << name << endl;

    return 0;
}