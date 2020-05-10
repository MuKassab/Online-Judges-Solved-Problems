#include <bits/stdc++.h>

using namespace std;

#define timesaver ios::sync_with_stdio(0);cin.tie(0);
#define loop(n)    for(int i = 0; i < n; i++)
const double EPS = 0.00000001;

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	int n, m, ans = 0;
	cin >> n;
	int b[n];
	loop(n) cin >> b[i];
	cin >> m;
	int g[m];
	loop(m) cin >> g[i];
	sort(b,b+n);
	sort(g,g+m);
	int l = 0, r = 0;
	while(l < n && r < m)
    {
        if(abs(b[l]-g[r]) <= 1) ++ans, ++l, ++r;
        else if(b[l] > g[r]) ++r;
        else ++l;
    }
    cout << ans << endl;
	return 0;
}
