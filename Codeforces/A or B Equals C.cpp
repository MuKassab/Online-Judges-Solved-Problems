#include <iostream>
#include <algorithm>

using namespace std;

int f(int x) {
	int temp;
    if(x <= 1) return 1;

	temp = x * f(x - 1);
	return temp;
}

int main()
{
    int t,l,z,pl,ans;
    bool ch;
    string a , b;
    cin >> t;
    while(t--)
    {
        z = 0;
        ch = 1;
        ans = 0;
        cin >> l;
        cin >> a >> b;
        for(int i = 0; i < l; i++)
        {
            if(a[i] == '0' && b[i] == '0')
                ++z;
            else if (a[i] == '1' && b[i] == '0')
                ch = 0;
            else if(a[i] == '0' && b[i] == '1')
                ++z;
        }
        if(!ch)
        {
            cout << "IMPOSSIBLE" << endl;
            continue;
        }
        pl = l - z;
        ans = 1;
        int ones = 1;
        string q="";
        while(ones <= pl)
        {
            q = "";
            for(int i = 0; i < ones; i++)
                q += "1";
            for(int i = ones; i < pl; i++)
                q += "0";
            sort(q.begin(),q.end());
            do{
                ++ans;
            }while(next_permutation(q.begin(),q.end()));
            ++ones;
        }
        cout << ans << endl;
    }
    return 0;
}
