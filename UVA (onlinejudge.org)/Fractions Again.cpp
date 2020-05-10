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
	//timesaver;
	//**************************************************************************
	long long int n;
	while(cin >> n)
    {
        long long int st = n+1, x;
        vector< pair<long long int, long long int> > v;
        while(true)
        {
            x = (st * n) / (st - n);
            if(x * st / (x + st) == n)
                v.push_back({x, st});
            if(st == x)
                break;
            ++st;
        }
        printf("%d\n", (int)v.size());
        for(int i = 0; i < (int)v.size(); i++)
            printf("1/%lld = 1/%lld + 1/%lld\n",n,v[i].first,v[i].second);
    }
    return 0;
}
