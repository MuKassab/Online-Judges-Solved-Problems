#include <iostream>

using namespace std;

int main()
{
    long long int l1 , r1 , l2 , r2 , k , time = 0;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    if(l2>r1||r2<l1)
        cout << 0;
    else
    {
        if(l2<l1)
            l2 = l1;
        if(r2>r1)
            r2 = r1;
        time += r2-l2 + 1;
        if(l2 <= k && k <= r1)
            --time;
        cout << time;
    }
    return 0;
}
///01007123652
