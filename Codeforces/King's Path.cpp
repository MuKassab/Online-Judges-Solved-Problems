#include <iostream>
#include <cstdio>
#include <map>
#include <queue>

int dx[] = {0, 0,1, 1,1,-1,-1,-1},
    dy[] = {1,-1,0,-1,1, 0, 1,-1};

using namespace std;

int BFS(map<pair<int,int> , int> &mp, pair<int,int> s, pair<int,int> e)
{
    int curCost,x,y;
    queue<pair<int,int>> qu;
    qu.push(s);
    while(!qu.empty())
    {
        x = qu.front().second;
        y = qu.front().first;
        curCost = mp[qu.front()] + 1;
        qu.pop();
        for(int i = 0; i < 8; i++)
        {
            if(mp.count({y+dy[i],x+dx[i]}) == 0) continue;
            if( mp[{y+dy[i] ,x+dx[i]}] != -1) continue;
            mp[{y+dy[i], x+dx[i]}] = curCost;
            qu.push({y+dy[i] ,x+dx[i]});
        }
    }
    return mp[e];
}

int main()
{
    int a, b, c, d, n, r;
    //map<int, pair<int,int> > availSpots;
    map<pair<int,int> , int> availPoints;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&n);
    pair<int,int> st = {a,b} , en = {c,d};
    while(n--)
    {
        scanf("%d%d%d",&r,&a,&b);
        for(int i = a; i <= b; i++)
            availPoints[{r,i}] = -1;
    }
    availPoints[st] = 0;
    availPoints[en] = -1;
    printf("%d\n",BFS(availPoints,st,en));
    return 0;
}
