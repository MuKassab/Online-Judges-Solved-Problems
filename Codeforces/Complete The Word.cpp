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
	string x;
	cin >> x;
	int l = 0, r = 0, qs = 0;
	int la = -1, ra = -1;
	set<char> letters;
	while(r < x.length())
    {
        r = (l > r)? l : r;
        if(letters.count(x[r])) letters.erase(x[l]),qs -= (x[l] == '?')? 1:0, ++l;
        else
        {
            if(x[r] == '?') ++ qs;
            else letters.insert(x[r]);
            ++r;
            if(r-l == 26)
            {
                if(letters.size() + qs == 26)
                {
                    la = l;
                    ra = r;
                    break;
                }
            }
        }
    }
    if(la == ra) cout << la << endl;
    else
    {
        int st = 'A';
        loop(la)
            cout << ((x[i] == '?')? 'A':x[i]);
        for(int i = la; i < ra; i++)
        {
            if(x[i] != '?') {cout << x[i]; continue;}
            while(letters.count((char)st)) ++st;
            cout << (char)st;
            letters.insert((char)st);
        }
        for(int i = ra; i < x.length(); i++)
            cout << ((x[i] == '?')? 'A':x[i]);
    }
	return 0;
}
