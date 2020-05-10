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

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	int fs, rs;
	while(cin >> fs && fs != 0)
    {
        cin >> rs;
        int f[fs], r[rs];
        for(int i = 0; i < fs; i++)
            cin >> f[i];
        for(int i = 0; i < rs; i++)
            cin >> r[i];
        int ind = 0;
        double arr[(fs*rs)], ans = -1;
        for(int i = 0; i < fs; i++)
        {
            for(int j = 0; j < rs; j++)
                arr[ind++] = (double)r[j]/f[i];
        }
        sort(arr,arr+(rs*fs));
        for(int i = 1; i < fs*rs; i++)
            ans = max(ans, arr[i]/arr[i-1]);
        cout << fixed << setprecision(2) << ans << endl;
    }
    return 0;
}
