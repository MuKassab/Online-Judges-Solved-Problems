#include <bits/stdc++.h>

using namespace std;

#define timesaver         ios::sync_with_stdio(0);cin.tie(0);
#define sz(v)			  ((int)((v).size()))
#define clr(v)		      memset(adjList, 0, sizeof(adjList))
#define loops(i, v)		  for(int i=0;i<sz(v);++i)
#define loop(i, n)		  for(int i=0;i<(int)(n);++i)
#define loopi(i, j, n)	  for(int i=(j);i<(int)(n);++i)
#define loopd(i, j, n)    for(int i=(j);i>=(int)(n);--i)
#define pb			      push_back

const double EPS = 1e-7;

string inp;
vector<string> mat;
istringstream ss;
const int N = 1000;
int r, c, currSpec;
char arr[N][N];
int vis[N][N];
int dx[] = {0,0,1,1,1,-1,-1,-1};
int dy[] = {1,-1,0,1,-1,0,1,-1};
int maxi[N];

bool valid(int q, int w)
{
    return ((q >= 0 && q < r) && (w >= 0 && w < c));
}

void dfs(int q,int w,char currTree)
{
    if(!valid(q,w) || vis[q][w] || arr[q][w] != currTree) return;
    vis[q][w] = currSpec;
    maxi[w] = max(maxi[w],currSpec);
    loop(i, 8) dfs(q+dx[i],w+dy[i],currTree);
}

void getData()
{
    r = mat.size();
    c = ceil((double)mat[0].length()/2);
    currSpec = 1;
    loop(i, r)
    {
        ss.str(mat[i]);
        loop(j, c)
        {
            ss >> arr[i][j];
            vis[i][j] = 0;
            maxi[c] = 0;
        }
    }
    loop(i, r)
    {
        loop(j, c)
        {
            if(vis[i][j]) continue;
            dfs(i, j, arr[i][j]);
            ++currSpec;
        }
    }
    int space;
    for(int i = 0; i < c; i++)
    {
        space = 0;
        while(maxi[i])
        {
            maxi[i] /= 10;
            ++space;
        }
        maxi[i] = space;
        //cout << i << " " << maxi[i] << endl;
    }
    //cout << "END" << endl;
    loop(i, r)
    {
        loop(j, c)
        {
            if(j != 0) cout << " ";
            cout << setw(maxi[j]) << vis[i][j];
        }
        cout << endl;
    }
    cout << "%" << endl;
    mat.clear();
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	while(getline(cin,inp))
    {
        if(inp != "%")
            mat.pb(inp);
        else
            getData();
    }
    getData();
    return 0;
}
