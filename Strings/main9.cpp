#include <iostream>
using namespace std;

int main(){

    string str = "ram kumar maniyari sitamarhi riga abc ";

    str.replace(19,9,"ram");

    cout << str << endl;

    string target = "maniyari";

    cout << str.find(target) << endl;

    cout << str[10] << endl;

    cout << str.erase(10, 8) << endl;



    return 0;
}