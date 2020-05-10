#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>

using namespace std;

int n, u, v, startingNodes, start, notVisited;
vector<int> adjList[110];
bool vis[110], justStarted;

void dfs(int node)
{
    if(vis[node]) return;
    if(!justStarted)
        justStarted = 1;
    else
        vis[node] = 1;
    for(int i = 0; i < adjList[node].size(); i++)
    {
        dfs(adjList[node][i]);
        vis[adjList[node][i]] = 1;
    }
}

void init()
{
    memset(adjList, 0, sizeof(adjList));
    memset(vis, 0, sizeof(vis));
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    scanf("%d", &n);
    while(n != 0)
    {
        init();
        scanf("%d", &u);
        while(u != 0)
        {
            scanf("%d", &v);
            while(v != 0)
            {
                adjList[u].push_back(v);
                scanf("%d", &v);
            }
            scanf("%d", &u);
        }
        scanf("%d", &startingNodes);
        while(startingNodes--)
        {
            notVisited = 0;
            justStarted = 0;
            scanf("%d", &start);
            dfs(start);
            for(int i = 1; i <= n; i++)
                if(!vis[i]) ++notVisited;
            printf("%d", notVisited);
            for(int i = 1; i <= n; i++)
                if(!vis[i]) printf(" %d", i);
            puts("");
            memset(vis, 0, sizeof(vis));
        }
        scanf("%d", &n);
    }
    return 0;
}
