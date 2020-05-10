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
	string s, c;
	bool found;
	int q, st, en;
	cin >> s >> q;
	while(q--)
    {
        cin >> c;
        found = 0;
        for(int i = 0, j = 0; i < s.length() && j < c.length(); i++)
        {
            if(s[i] == c[j])
            {
                if(j == 0) st  = i;
                ++j;
                if(j == c.length())
                {
                    en = i;
                    found = 1;
                    break;
                }
            }
        }
        if(found) cout << "Matched " << st << " " << en << endl;
        else cout << "Not matched" << endl;
    }
    return 0;
}
