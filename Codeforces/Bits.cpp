#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t,s,on;
    long long int l, r, ans;
    cin >> t;
    while(t--)
    {
        cin >> l >> r;
        ans  = l;
        //cout << r << endl;
        for(int i = 0; i < 80; i++)
        {
            if((ans | (1ll << i)) > r)
                break;
            else
                ans |= (1ll << i);
            //cout << i << " - " << ans <<  endl;
        }
        cout << ans << endl;
    }
    return 0;
}
