#include <bits/stdc++.h>

using namespace std;

#define timesaver         ios::sync_with_stdio(0);cin.tie(0);
#define sz(v)			  ((int)((v).size()))
#define loops(i, v)		  for(int i=0;i<(sz(v));++i)
#define loop(i, n)		  for(int i=0;i<(int)(n);++i)
#define loopi(i, j, n)	  for(int i=(j);i<(int)(n);++i)
#define loopd(i, j, n)    for(int i=(j);i>=(int)(n);--i)
#define pb			      push_back
#define MP                make_pair

const double EPS = 1e-7;
const int N = 1000;
char arr[N][N];
bool vis[N][N];
int t, h, w, caseNum;

bool valid(int r, int c)
{
    return ((r >= 0 && r < h) && (c >= 0 && c < w));
}

void dfs(int i, int j, char currCheck)
{
    if(vis[i][j] || !valid(i,j) || arr[i][j] != currCheck)
        return;
    vis[i][j] = true;
    dfs(i+1,j,currCheck);
    dfs(i,j+1,currCheck);
    dfs(i,j-1,currCheck);
    dfs(i-1,j,currCheck);
}

bool customSort(pair<int, char> a, pair<int, char> b)
{
    if(a.first != b.first) return (a.first > b.first);
    return (a.second < b.second);
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
    cin >> t;
    while(t--)
    {
        cin >> h >> w;
        map<char, int> m;
        loop(i, h)
            loop(j, w)
            {
                cin >> arr[i][j];
                vis[i][j] = 0;
            }
        loop(i, h)
        {
            loop(j, w)
            {
                if(vis[i][j]) continue;
                dfs(i,j,arr[i][j]);
                ++m[arr[i][j]];
            }
        }
        vector< pair < int, char> > v;
        for(auto x: m)
            v.pb({x.second,x.first});
        sort(v.begin(),v.end(),customSort);
        cout << "World #" << ++caseNum << endl;
        loops(i, v)
            cout << v[i].second << ": " << v[i].first << endl;
    }
    return 0;
}
