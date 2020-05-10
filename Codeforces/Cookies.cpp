#include <iostream>

using namespace std;

int main()
{
    int x,sum = 0, ways = 0;
    cin >> x;
    int arr[x];
    for(int i = 0; i < x; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        if ((sum - arr[i])%2 == 0)
            ++ways;
    }
    cout << ways;
    return 0;
}
