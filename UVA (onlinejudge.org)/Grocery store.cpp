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
	int x = 0;
    for(int i = 1; i <= 2000 && (i*i*i*i <= 2000000000); i++)
    {
        for(int j = i; j <= 2000 - i &&(i*j*j*j <= 2000000000) ;j++)
        {
            for(int k = j; k <= 2000 - i - j && i*j*k*k <= 2000000000;k++)
            {
                int b = i*j*k;
                int c = 1000000;
                if(b == c) continue;
                int a = i+j+k;
                int d = c*a;
                int e = b-c;
                if(d%e) continue;
                int p = d/e;
                if(k > p) continue;
                if(a+p > 2000) continue;
                if(b*p > 2000000000) continue;
                cout << fixed << setprecision(2);
                cout << (double)i/100 << " " << (double)j/100 << " " << (double)k/100 << " " << (double)p/100 << endl;
            }
        }
    }
    cout << x;
    return 0;
}
