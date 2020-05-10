#include <iostream>

using namespace std;

int main()
{
    int n, b, d, ans = 0, cur = 0, x;
    cin >> n >> b >> d;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x > b)
            continue;
        cur += x;
        if(cur > d)
        {
            ++ans;
            cur = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
