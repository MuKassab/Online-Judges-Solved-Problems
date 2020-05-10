#include <iostream>

using namespace std;

int main()
{
    int days , payback;
    cin >> days >> payback;
    int prices[days];
    for (int i =0; i < days; i++)
    {
        cin >> prices[i];
    }
    int profit = 0;
    for (int i =0; i < days - 1; i++)
    {
        if(prices[i] > prices[i+1])
        {
            if ((prices[i] - prices[i+1]) > profit + payback )
                profit = (prices[i] - prices[i+1]) - payback;
        }
    }
    if (profit > 0)
        cout << profit;
    else
        cout << "0";

    return 0;
}
