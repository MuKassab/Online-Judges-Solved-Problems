#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    string a, cur, ans = "", rev;
    cin >> a;
    for(int i = 1; i < pow(2,a.length()); i++)
    {
        cur = "";
        for(int j = 0; j < a.length(); j++)
        {
            if(i & (1 << j))
                cur += a[j];
        }
        rev = cur;
        reverse(rev.begin(),rev.end());
        if(rev == cur && cur > ans)
            ans = cur;
    }
    cout << ans << endl;
    return 0;
}
