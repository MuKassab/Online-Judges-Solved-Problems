#include <bits/stdc++.h>

using namespace std;

#define timesaver         ios::sync_with_stdio(0);cin.tie(0);
#define sz(v)			  ((int)((v).size()))
#define clr(v)		      memset(v, 0, sizeof(v))
#define loops(i, v)		  for(int i=0;i<sz(v);++i)
#define loop(i, n)		  for(int i=0;i<(int)(n);++i)
#define loopi(i, j, n)	  for(int i=(j);i<(int)(n);++i)
#define loopd(i, j, n)    for(int i=(j);i>=(int)(n);--i)
#define pb			      push_back

const double EPS = 1e-7;


long long int arr[1010];
int n, t, s, coins;

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	cin >> t;
	while(t--)
    {
        cin >> n;
        coins = 1;
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        s = arr[0];
        for(int i = 1; i < n; i++)
        {
            s += arr[i];
            ++coins;
            if((i != (n - 1)) && arr[i+1] <= s)
            {
                s -= arr[i];
                --coins;
            }
        }
        cout << coins << endl;
    }
    return 0;
}
