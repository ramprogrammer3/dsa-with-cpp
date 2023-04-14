#include <iostream>
#include <cstring>
using namespace std;

void convertIntoLowerCase(char word[])
{

    int n = strlen(word);

    for (int i = 0; i < n; i++)
    {
        word[i] = word[i] - 'A' + 'a';
    }
}

int main()
{

    char word[100] = "RAMKUMAR";

    convertIntoLowerCase(word);

    cout << word << endl;

    return 0;
}