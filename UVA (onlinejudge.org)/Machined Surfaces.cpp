#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int x,minW, cur,ans;
    cin >> x;
    while(x != 0)
    {
        string a;
        ans = 0;
        minW = 26;
        for(int i = 0; i < x; i++)
        {
            cin.ignore();
            getline(cin,a);
            cur = 0;
            for(int i = 0; i < 25; i++)
                if(a[i] == ' ')
                    ++cur;
            ans += cur;
            minW = min(minW,cur);
        }
        ans -= minW * x;
        cout << ans << endl;
        cin >> x;
    }
    return 0;
}
