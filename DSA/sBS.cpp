#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int> &prices){
    int maxProfit = 0, bestBuy = prices[0];

    for(int i = 1; i < prices.size(); i++){
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit;
}
int main(){
    // In this module we calculate maximum profit
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(prices);

    return 0;
}