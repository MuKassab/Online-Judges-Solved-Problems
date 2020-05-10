#include <iostream>

using namespace std;

int main()
{
    int n , k , reset = 0;
    cin >> n >> k;
    if(2*n == k && n%2 == 0)
    {
        cout << n;
        return 0;
    }
    while (k != 0 && n != 0)
    {
        k -= 2;
        --n;
        ++reset;
        if (reset == 2)
            reset = 0;
        if(3*n == k || 4*n == k || 5*n == k)
        {
            cout << reset;
            return 0;
        }
        if(2*n == k && n%2 == 0)
        {
        cout << n;
        return 0;
        }
    }
    return 0;
}
