#include <iostream>

using namespace std;

int main()
{
    long long int r1 , r2;
    cin >> r1 >> r2;
    if(r2 - r1 < 2)
        cout << "-1";
    else
    {
        if(r1%2 == 1)
            ++r1;
        if(r2-r1 < 2)
            cout << -1;
        else
            cout << r1 << " " << r1+1 << " " << r1+2;
    }
    return 0;
}
