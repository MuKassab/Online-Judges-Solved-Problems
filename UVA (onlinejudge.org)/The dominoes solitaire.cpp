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
int n, m, s, e, ans;
bool f;
pair<int,int> p[16];
bool freq[16];

void placePieces()
{
    if(ans == 0 || f)
    {
        f = 1;
        return ;
    }
    for(int i = 0; i < m && !f; i++)
    {
        if(freq[i])continue;
        bool q, w;
        q = w = 0;
        if(ans > 1)
        {
            if(p[i].first == s)
            {
                q = 1;
                freq[i] = 1;
                s = p[i].second;
                --ans;
            }
            else if(p[i].second == s)
            {
                w = 1;
                freq[i] = 1;
                s = p[i].first;
                --ans;
            }
            if(q || w)
            {
                placePieces();
                ++ans;
                freq[i] = 0;
                if(q) s = p[i].first;
                else s = p[i].second;
            }
        }
        else{
            if((p[i].second == s && p[i].first == e) || (p[i].second == e && p[i].first == s)){
                f = 1;
                --ans;
                freq[i] = 1;
                placePieces;
            }
        }
    }
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	//timesaver;
	//**************************************************************************
	while(cin >> n && n)
    {
        cin >> m;
        pair<int,int> st, en;
        cin >> st.first >> st.second >> en.first >> en.second;
        s = st.second;
        e = en.first;
        for(int i = 0; i < m; i++)
        {
            cin >> p[i].first >> p[i].second;
            freq[i] = 0;
        }
        ans = n;
        f = 0;
        placePieces();
        if(f) puts("YES");
        else puts("NO");
    }
    return 0;
}
