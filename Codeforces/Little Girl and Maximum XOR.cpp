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
    long long int a,b;
    cin >> a >> b ;
    int lastOne = log2(b);
    long long int lower = a, upper = (1ll << lastOne);
    while(lastOne >= 0)
    {
        long long int x = (1ll << lastOne);
        if(upper < a && upper + x <= b)
            upper += x;
        else if((upper >= a) && (upper + x <= b) && ((lower& (1ll << lastOne)) == 0))
                    upper += x;
        else if((lower + x <= b) && ((upper& (1ll << lastOne)) == 0) && ((lower& (1ll << lastOne)) == 0))
            lower += x;
        --lastOne;
    }
    cout << (lower^upper) << endl;
    return 0;
}
