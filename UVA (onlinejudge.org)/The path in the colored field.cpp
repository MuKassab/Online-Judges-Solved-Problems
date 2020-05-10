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
	int n, mini , ans;
	char c;
	while(cin >> n)
    {
        ans = -1;
        vector< pair<int,int> > o, t;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
            {
                cin >> c;
                if(c == '1') o.push_back({i,j});
                else if(c == '3') t.push_back({i,j});
            }
        for(int i = 0; i < o.size(); i++)
        {
            mini = 9000000;
            for(int j = 0; j < t.size(); j++)
                mini = min(mini , abs(o[i].first - t[j].first) + abs(o[i].second - t[j].second));
            ans = max(ans, mini);
        }
        cout << ans << endl;
    }
    return 0;
}
