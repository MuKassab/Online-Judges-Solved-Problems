#include <bits/stdc++.h>
#define timesaver ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

bool check(int x)
{
    int b = x;
    int fd = x%10;
    b /= 10;
    int sd = b%10;
    if(fd == 7 || sd == 7) return true;
    return false;
}

int main()
{
    int x,h,min;
    while(cin >> x >> h >> min)
    {
        if(check(h) || check(min))
        {
            cout << 0 << endl;
            continue;
        }
        for(int i = 1; i <= 1000; i++)
        {
            ;
        }
    }
    return 0;
}
