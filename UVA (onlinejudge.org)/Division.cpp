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

bool check(string x, string y)
{
    set<int> s;
    for(int i = 0; i < 5; i++)
    {
        s.insert(x[i]);
        s.insert(y[i]);
    }
    return (s.size() == 10);
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	int arr[100000];
	string nms[100000], add;
    for(int i = 99999; i >= 1; i--)
    {
        arr[i] = i;
        add = "";
        if(i < 10000) add = "0";
        if(i < 1000)  add = "00";
        if(i < 100)   add = "000";
        if(i < 10)    add = "0000";
        nms[i] = add + to_string(i);
    }
	int n, den;
	bool f, q = 0;
	while(cin >> n && n != 0)
    {
        f = 0;
        if(q) cout << endl;
        else q = 1;
        for(int i = 2; i <= 99999; i++)
        {
            den = i / n;
            if(den * n == i && check(nms[i], nms[den]))
            {
                cout << nms[i] << " / " << nms[den] << " = " << n << endl;
                f = 1;
            }
        }
        if(!f)
            cout << "There are no solutions for "<< n << "." << endl;
    }
    return 0;
}
