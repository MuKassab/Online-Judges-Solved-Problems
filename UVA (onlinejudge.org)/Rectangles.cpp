#include <iostream>

using namespace std;

int main()
{
    int n,a,ans,c;
    cin >> n;
    if(n <= 3)
        cout << n << endl;
    else
    {
        ans = n;
        int j = 2;
        for(int i = 2; i < n; i++) //height
        {
            /*a = i;
            c = 0;
            while(a < n)
            {
                a += i;
                if(a <= n)
                    c++;
            }
            if(c >= i-1)
                ans += c;*/
            for(j = i; j < n; j++) //height
            {
                a = i;
                if(i*j <= n)
                {
                    ++ans;
                    //cout << i << " - " << j << endl;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
