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
	//*************************************************************************
	int b, s, in, m, c = 1;
	while((cin >> b >> s) && b && s)
    {
        m = 1e9;
        for(int i = 0; i < b; i++)
        {
            cin >> in;
            m = min(m,in);
        }
        for(int i = 0; i < s; i++)
            cin >> in;
        if(b <= s)
            cout << "Case " << c++ << ": " << 0 << endl;
        else
            cout << "Case " << c++ << ": " << b-s << " " << m << endl;
    }
    return 0;
}
//*.*.
