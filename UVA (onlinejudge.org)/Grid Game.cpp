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
	int t, n;
	int cells[] = {0,1,2,3,4,5,6,7};
	cin >> t;
	while(t--)
    {
        int diff, curr, ans = 1e9, a, b;
        sort(cells,cells+8);
        cin >> n;
        int grid[n][n];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> grid[i][j];
        do
        {
            curr = 0;
            for(int i = 0; i < n; i++)
                curr += grid[i][ cells[i] ];
            ans = min(ans, curr);
        }while(next_permutation(cells,cells+n));
        cout << ans << endl;
    }
    return 0;
}
