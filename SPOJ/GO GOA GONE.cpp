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
	int people[9], f, a, b, maxi = 0, curr;
    bool take = false;
    for(int i = 1; i <= 8; i++)
        cin >> people[i];
    cin >> f;
    vector< vector<int> > v(9);
    for(int i = 0; i < f; i++)
    {
        cin >> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }
    for(int i = 1; i < (1ll << 8); i++)
    {
        curr = 0;
        int freq[9]= {};
        for(int j = 0; j < 8; j++)
        {
            take = true;
            if(i & (1 << j))
            {
                for(int k = 0; k < v[j+1].size(); k++)
                {
                    if(freq[v[j+1][k]]) {
                        take = false;
                        break;
                    }
                }
                if(take)
                {
                    curr += people[j+1];
                    freq[j+1] = 1;
                }
            }
        }
        maxi = max(maxi,curr);
    }
    cout << maxi << endl;
    return 0;
}
