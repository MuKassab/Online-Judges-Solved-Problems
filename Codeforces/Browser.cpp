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
	int n, pos, l, r, ans = 0, ml, mr;
	cin >> n >> pos >> l >> r;
	ml = 1, mr = n;
	if(l == 1 && r == n) ans = 0;
	else if(l == 1 && r != n)
        if(pos > r) ans += (pos - r) + 1;
        else ans += (r - pos) + 1;
    else if(r == n && l != 1)
        if(pos > l) ans += (pos - l) + 1;
        else ans += (l - pos) + 1;
    else if(pos >= l && pos <= r)
        ans += min(pos - l, r-pos) + (r - l) + 2;
    else if(pos < l)
        ans += (l - pos) + (r - l) + 2;
    else
        ans += (pos - r) + (r - l) + 2;
    cout << ans << endl;
    return 0;
}
