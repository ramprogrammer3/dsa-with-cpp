#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void maxProfitFinder(vector<int> &v,int i, int &minPrice, int& maxProfit){

    // base case
    if(i == v.size())return;

    // sol for one case

    if(v[i] < minPrice) minPrice = v[i];

    int todayProfit = v[i] - minPrice;

    if(todayProfit > maxProfit) maxProfit = todayProfit;

    // recursive call
    maxProfitFinder(v,i+1,minPrice, maxProfit);

}

int main(){


    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;

    vector<int> v{7,1,5,3,6,4};

    maxProfitFinder(v,0,minPrice,maxProfit);

    cout << maxProfit << endl;
    


    return 0;
}