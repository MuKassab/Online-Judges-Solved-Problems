#include <iostream>

using namespace std;

int main()
{
    int days , mini = 0, maxi = 0 , c;
    cin >> days;
    c = days;
    while (days > 0)
    {
        days -= 5;
        if (days > 0)
        {
            mini++;
            days--;
            if (days > 0)
            {
                mini++;
                days--;
            }
        }
    }
    while (c > 0)
    {
        c--;
        maxi++;
        if (c > 0)
        {
            --c;
            maxi++;
        }
        if (c > 0)
        {
            c -= 5;
        }
    }
    cout << mini << " " << maxi;
    return 0;
}
