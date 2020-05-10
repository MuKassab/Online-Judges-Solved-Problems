#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

const int N = 200050;
int junc, roads, cost, parent[N], height[N], temp, u, v, maxCost, minimumSpanningTree, sz;
vector< pair< int, pair< int, int > > > edges;

int mySet(int a)
{
    if(parent[a] == a)
        return a;
    return parent[a] = mySet(parent[a]);
}

void makeUnion(int a, int b)
{
    int aP = parent[a], bP = parent[b];
    if(height[aP] >= height[bP])
    {
        parent[bP] = aP;
        height[aP] += (height[aP] == height[bP]) ? 1 : 0;
        return;
    }
    parent[aP] = bP;
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    scanf("%d%d", &junc, &roads);
    while(junc != 0 && roads != 0)
    {
        sz = edges.size();
        for(int i = 0; i < sz; i++)
            edges.pop_back();
        maxCost = minimumSpanningTree = temp = u = v = cost = 0;
        for(int i = 1; i <= roads; i++)
        {
            scanf("%d%d%d",&u,&v,&cost);
            edges.push_back({cost, {u,v}});
            maxCost += cost;
        }
        for(int i = 0; i < N; i++)
        {
            height[i] = 0;
            parent[i] = i;
        }
        sort(edges.begin(),edges.end());
        for(auto e : edges)
        {
            if(temp == junc - 1) break;
            if(mySet(e.second.first) == mySet(e.second.second)) continue;
            //cout << e.first << " -- " << e.second.first << " -- " << e.second.second << endl;
            ++temp;
            minimumSpanningTree += e.first;
            makeUnion(e.second.first, e.second.second);
        }
        //cout << maxCost << endl << minimumSpanningTree << endl;
        printf("%d\n",maxCost - minimumSpanningTree);
        scanf("%d%d", &junc, &roads);
    }
    return 0;
}
