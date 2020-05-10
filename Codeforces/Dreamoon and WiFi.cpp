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
	int e = 0,c = 0, curr = 0, posib = 0, valid = 0,t;
	bool qu = false;
	int l;
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] == '+') ++e;
        else --e;
        if(b[i] == '+') ++c;
        else if(b[i] == '-') --c;
        else qu = 1;
    }
    cout << fixed << setprecision(12);
    l = a.length();
    for(int i = 0; i < (1 << l); i++)
    {
        ++posib;
        t = c;
        for(int j = 0; j < l; j++)
        {
            if(b[j] != '?') continue;
            if(i & (1 << j)) ++t;
            else --t;
        }
        if(t == e) ++valid;
    }
    cout << (double)valid / posib << endl;
    return 0;
}
