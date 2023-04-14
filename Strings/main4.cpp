#include <iostream>
#include <cstring>
using namespace std;

void replaceAllSpace(char sentence[])
{
    int n = strlen(sentence);

    for (int i = 0; i < n; i++)
    {
        if (sentence[i] == ' ')
        {
            sentence[i] = '@';
        }
    }
}

int main()
{

    char sentence[100];
    cout << "Enter a sentence here " << endl;
    cin.getline(sentence, 100);

    replaceAllSpace(sentence);

    cout << "Your sentence is below  " << endl;

    cout << sentence << endl;

    return 0;
}