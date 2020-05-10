#include <iostream>

using namespace std;

int main()
{
    long long int x,a;
    cin >> x;
    if (x%2)
    {
        ++x;
        cout << -1 * (x/2);
    }
    else
        cout << (x/2);
    return 0;
}
