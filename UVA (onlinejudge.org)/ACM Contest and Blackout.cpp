#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <set>
#include <cstring>

using namespace std;

const int N = 110;
int tc, schools, u, v, cost, height[N], parent[N], connections, curCost, sz, temp;
vector< pair< int, pair< int, int > > > edges;
set< vector<int> > checking;
vector<int> minimumCosts, curEdges;

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
        height[aP] += (height[aP] == height[bP])? 1 : 0;
        return;
    }
    parent[aP] = bP;
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    scanf("%d",&tc);
    while(tc--)
    {
        edges.clear();
        minimumCosts.clear();
        checking.clear();
        scanf("%d%d",&schools,&connections);
        for(int i = 1; i <= connections; i++)
        {
            scanf("%d%d%d",&u,&v,&cost);
            edges.push_back({cost,{u,v}});
        }
        sort(edges.begin(),edges.end());
        sz = edges.size();
        for(int i = 0; i < sz; i++)
        {
            //cout << i << endl;
            curCost = 0;
            temp = 0;
            curEdges.clear();
            for(int k = 0; k < N; k++)
            {
                parent[k] = k;
                height[k] = 0;
            }
            for(int j = 0; j < sz; j++)
            {
                if(i == j) continue;
                if(mySet(edges[j].second.first) == mySet(edges[j].second.second)) continue;
                curEdges.push_back(j);
                ++temp;
                curCost += edges[j].first;
                makeUnion(edges[j].second.first, edges[j].second.second);
                if(temp == schools - 1)
                {
                    sort(curEdges.begin(),curEdges.end());
                    if(checking.find(curEdges) != checking.end()) break;
                    checking.insert(curEdges);
                    minimumCosts.push_back(curCost);
                    break;
                }
            }
        }
        //cout << "SZ : " << minimumCosts.size() << endl;
        sort(minimumCosts.begin(),minimumCosts.end());
        printf("%d %d\n",minimumCosts[0],minimumCosts[1]);
    }
    return 0;
}
