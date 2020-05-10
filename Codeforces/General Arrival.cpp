#include <iostream>

using namespace std;

int main()
{
    int n , highest = 0 , lowest = 100 , sec1=0, sec2 =0, a , b;
    cin >> n;
    int soldiers[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> soldiers[i];
    }
    for (int j=0; j < n; ++j )
    {
        if (soldiers[j] > highest)
        {
            highest = soldiers[j];
            a = j;
        }
    }
    for (int j=0; j < n; ++j )
    {
        if (soldiers[j] <= lowest)
        {
            lowest = soldiers[j];
            b = j;
        }
    }
    if (a < b)
    {
        sec1 = a;
        sec2 = n - b - 1;
        cout << sec1 + sec2;
    }
    if (a > b)
    {
        sec1 = a;
        sec2 = n - b -2;
        cout << sec1 + sec2;
    }


    return 0;
}
