#include <iostream>

using namespace std;

int main()
{
    long int a , i , k = 1;
    int l = 1;
    cin >> a;
    if (a > 0)
    {
        cout << a;
        return 0;
    }
    a *= -1;
    for (i = 10; i <= a; i*=10)
        l++;
    i /= 10;
    if ((a%10 != 0 || a > 100) && a > 9)
        cout << "-";
    if (a < 10)
    {
        cout << 0;
        return 0;
    }
    if (((a%100) / 10) > (a%10))
    {
        for (int j = 0; j < l; j++)
        {
            if (i == 10)
                {
                    continue;
                }
            cout << (a / i)%10;
            k*=10;
            i/=10;
        }
        cout << a%10;
    }
    else
    {
        for (int j = 0; j < l-1; j++)
        {
            cout << (a / i)%10;
            k*=10;
            i/=10;
        }
    }
    return 0;
}
