#include <iostream>

using namespace std;

int main()
{
    long long int a[4];
    int x = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                ++x;
                break;
            }
        }
    }
    cout << x;
    return 0;
}
