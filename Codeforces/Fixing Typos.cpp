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
    string x = "";
    list<char> l;
    char arr[5];
    cin >> x;
    for(int i = 0; i < x.length(); i++)
        l.push_back(x[i]);
    for(auto i = l.begin(); i != l.end(); i++)
    {
        int x = 0;
        arr[4] = '.';
        for(auto j = i; x < 4 && j != l.end(); j++, x++)
        {
            arr[x] = *j;
            if(x == 3) arr[4] = '3';
        }
        if(arr[4] != '3') break;
        if(arr[0] == arr[1] && arr[2] == arr[3])
        {
            auto q = i;
            advance(q, 2);
            l.erase(q);
            i--;
        }
    }
    for(auto i = l.begin(); i != l.end(); i++)
    {
        arr[3] = '.';
        int x = 0;
        for(auto j = i; j != l.end() && x < 3; j++, x++)
        {
            arr[x] = *j;
            if(x == 2) arr[3] = '3';
        }
        if(arr[3] != '3') break;
        if(arr[0] == arr[1] && arr[0] == arr[2])
        {
            auto q = i;
            advance(q,1);
            l.erase(q);
            i--;
        }
    }
    for(auto x : l) cout << x;
    return 0;
}
