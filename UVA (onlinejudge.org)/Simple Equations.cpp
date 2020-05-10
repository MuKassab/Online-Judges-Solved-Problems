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
	int t, a, b, c, x, y , z;
	//cout << -1 * 2 * -6 << endl;
	bool f;
	cin >> t;
	while(t--)
    {
        cin >> a >> b >> c;
        f = 0;
        for(int i = -10000; i <= b && !f; i++)
        {
            if(i == 0) continue;
            //cout << i << endl << " **** " << endl;
            for(int j = i; (j <= b) && (i*j <= b) && (i+j <= a) && !f; j++)
            {
                x = i*j;
                if(x == 0 || i == j) continue;
                if(b % x) continue;
                z = b / x;
                if(i == z || j == z) continue;
                if((i + j + z == a) && (i*j*z == b) && (i*i + j*j + z*z == c))
                {
                    f = 1;
                    cout << i << " " << j << " " << z << endl;
                    break;
                }
            }
        }
        if(!f)
            puts("No solution.");
    }
    return 0;
}
