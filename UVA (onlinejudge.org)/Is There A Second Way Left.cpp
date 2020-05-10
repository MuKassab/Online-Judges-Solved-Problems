#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 120;
int testc, neigh, con, u, v, cost, sz = 2, parent[N], height[N], temp, lp, curCost, caseNum;
vector<int> takenEdges, posCosts;
vector< pair< int, pair<int,int> > > edges;
bool foundS, enter;

void init()
{
    for(int i = 0; i < N; i++)
    {
        parent[i] = i;
        height[i] = 0;
    }
    temp = curCost = 0;
}

int mySet(int a)
{
    if(parent[a] == a)
        return a;
    return parent[a] = mySet(parent[a]);
}

void makeUnion(int a, int b)
{
    int aP = parent[a], bP = parent[b];
    if(height[a] >= height[b])
    {
        parent[bP] = aP;
        height[a] += (height[a] == height[b])? 1 : 0;
        return;
    }
    parent[aP] = bP;
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    scanf("%d",&testc);
    while(testc--)
    {
        sz = 2;
        takenEdges.clear();
        edges.clear();
        posCosts.clear();
        scanf("%d%d",&neigh,&con);
        for(int i = 0; i < con; i++)
        {
            scanf("%d%d%d",&u,&v,&cost);
            edges.push_back({cost,{u,v}});
        }
        sort(edges.begin(),edges.end());
        lp = edges.size();
        foundS = 0;
        enter = 1;
        for(int i = 0; i < sz; i++)
        {
            init();
            for(int j = 0; j < lp; j++)
            {
                if(foundS && j == takenEdges[i]) continue;
                if(mySet(edges[j].second.first) == mySet(edges[j].second.second)) continue;
                ++temp;
                if(!foundS) takenEdges.push_back(j);
                makeUnion(edges[j].second.first,edges[j].second.second);
                curCost += edges[j].first;
                if(temp == neigh - 1)
                {
                    posCosts.push_back(curCost);
                    foundS = 1;
                    break;
                }
            }
            if(foundS && enter)
            {
                sz = takenEdges.size();
                enter = 0;
                i = -1;
            }
        }
        sort(posCosts.begin(),posCosts.end());
        sz = posCosts.size();
        if(sz == 0)
            printf("Case #%d : No way\n",++caseNum);
        else if(sz == 1)
            printf("Case #%d : No second way\n",++caseNum);
        else
            printf("Case #%d : %d\n",++caseNum,posCosts[1]);
    }
    return 0;
}
