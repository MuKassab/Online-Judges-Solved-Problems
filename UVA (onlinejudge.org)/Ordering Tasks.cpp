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
vector<vector<int> > adjList;
vector<int> topoSort;
bitset<110> vis;
int n, m, pre, nxt;



void sortTopics(int node)
{
    if(vis[node]) return;
    vis[node] = true;
    for(int c : adjList[node]) sortTopics(c);
    topoSort.pb(node);
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
    while(cin >> n >> m, n || m)
    {
        topoSort.clear();
        vis.reset();
        adjList.clear();
        adjList.resize(n+1);

        loop(i, m)
        {
            cin >> nxt >> pre;
            adjList[pre].pb(nxt);
        }
        for(int i = 1; i <= n; i++)
            sortTopics(i);
        cout << topoSort[0];
        for(int i = 1; i < topoSort.size(); i++)
            cout << " " << topoSort[i];
        cout << endl;
    }
    return 0;
}
