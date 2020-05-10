#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

vector<int> adjList[10050];
bool vis[10050], secondT;
int n, u, v, longestPathInTheTree, nodeToCheckFrom;

void dfs(int node = 1, int currPath = 0)
{
    if(longestPathInTheTree < currPath)
    {
        longestPathInTheTree = currPath;
        nodeToCheckFrom = node;
    }
    vis[node] = 1;
    for(int i = 0; i < adjList[node].size(); i++)
    {
        if(vis[adjList[node][i]]) continue;
        dfs(adjList[node][i], currPath + 1);
    }
    vis[node] = 0;
}

int main()
{
    memset(adjList, 0, sizeof(adjList));
    scanf("%d",&n);
    int x = n;
    n--;
    if(n > 0)
    {
        while(n--)
        {
            scanf("%d%d",&u,&v);
            adjList[u].push_back(v);
            adjList[v].push_back(u);

        }
        dfs();
        secondT = 1;
        dfs(nodeToCheckFrom,0);
    }
    printf("%d\n",longestPathInTheTree);
    return 0;
}
