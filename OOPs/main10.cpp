#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int **arr = new int *[5];
    int row = 5;
    int col = 3;

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // printing

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "ram kumar " << endl;
    vector<vector<int>> a(5, vector<int>(6, 0));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // de-allocate

    for(int i = 0; i<row; i++){
        delete []arr[i];
    }

    delete []arr;

    return 0;
}