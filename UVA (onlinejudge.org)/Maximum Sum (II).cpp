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
	int n, a, s;
	while(cin >> n && n)
    {
        s = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            if(a != 0)
            {
                if(!s)
                {
                    s = 1;
                    cout << a;
                }
                else cout << " " << a;
            }
        }
        if(!s) cout << 0;
        cout << endl;
    }
    return 0;
}
