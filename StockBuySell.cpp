#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> price = {7, 19, 1, 5, 4, 6, 2};
    int bestBuy = price[0], max_profit = 0;
    for (int i = 0; i < price.size(); i++)
    {
        if (price[i] > bestBuy)
            max_profit = max(max_profit, price[i] - bestBuy);
        bestBuy = min(bestBuy, price[i]);
    }
    cout << max_profit;
    return 0;
}