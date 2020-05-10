#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

vector<int> adjList[10010];
bool vis[10010];
int n, e, u, v, connectedNodes;
bool fal, dfsHappend;

void dfs(int node = 1)
{
    if(fal) return;
    vis[node] = 1;
    for(int i = 0; i < adjList[node].size(); i++)
    {
        dfsHappend = 1;
        if(vis[adjList[node][i]])
        {
            fal = 1;
            break;
        }
        ++connectedNodes;
        dfs(adjList[node][i]);
    }
}

int main()
{
    scanf("%d%d",&n,&e);
	memset(adjList, 0, sizeof(adjList));
    for(int i = 0; i < e; i++)
    {
        scanf("%d%d",&u,&v);
        adjList[u].push_back(v);
        //adjList[v].push_back(u);
    }
    dfs();
    if(!fal && e == n - 1 && dfsHappend && e == connectedNodes)
        puts("YES");
    else
        puts("NO");
    return 0;
}
