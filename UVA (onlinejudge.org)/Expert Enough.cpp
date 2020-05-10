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
	int t, l, h, d, p, q;
	bool f;
	string n;
	cin >> t;
	while(t--)
    {
        cin >> d;
        map<string, pair<int, int> > m;
        for(int i = 0; i < d; i++)
        {
            cin >> n >> l >> h;
            m[n] = {l, h};
        }
        cin >> q;
        while(q--)
        {
            cin >> p;
            n = "X";
            f = 1;
            for(auto it = m.begin(); it != m.end(); it++)
            {
                if( p >= (it->second).first && p <= (it->second).second)
                {
                    if(n == "X")
                        n = it->first;
                    else
                    {
                        f = 0;
                        break;
                    }
                }
            }
            if(!f || n == "X")
                cout << "UNDETERMINED" << endl;
            else
                cout << n << endl;
        }
        if(t)
            cout << endl;
    }
    return 0;
}
