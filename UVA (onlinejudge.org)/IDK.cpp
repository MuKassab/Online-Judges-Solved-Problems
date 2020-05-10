#include <iostream>
#include <map>

using namespace std;

int main()
{
    int x,ans,l,w;
    map<int,int> m;
    cin >> x;
    if(x % 2 == 0)
    {
        ans = x;
        for(int i = 2; i < x; i++)
        {
            l = i;
            while(l <= x)
            {
                ++ans;
                l += i;
            }
        }
        cout << ans;
    }
    else
    {
        ans = 3;
        x /= 2;
        x--;
        ans += x;
        cout << ans;
    }
    return 0;
}
