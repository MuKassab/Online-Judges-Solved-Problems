#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <math.h>
#include <typeinfo>
#include <cstring>

using namespace std;

vector< pair< double, pair<int, int> > > costOfEdges;
const int N = 110;
double x, y, dist, totalCost, loc[N][2];
int t, n, temp, parent[N], height[N], sz;

int findSet(int a)
{
    if(parent[a] == a)
        return a;
    return parent[a] = findSet(parent[a]);
}

void makeUnion(int a, int b)
{
    int aP = parent[a], bP = parent[b];
    if(height[aP] >= height[bP])
    {
        parent[bP] = aP;
        height[aP] += (height[aP] == height[bP]) ? 1 : 0;
    }
    else
        parent[aP] = bP;
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d",&n);
        temp = 0;
        totalCost = 0;
        for(int i = 1; i <= n; i++)
        {
            scanf("%lf%lf",&loc[i][0],&loc[i][1]);
            parent[i] = i;
            height[i] = 0;
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = i+1; j <= n; j++)
            {
                dist = sqrt(pow(loc[i][0] - loc[j][0],2) + pow(loc[i][1] - loc[j][1],2));
                costOfEdges.push_back({dist, {i,j}});
            }
        }
        sort(costOfEdges.begin(),costOfEdges.end());
        for(auto i : costOfEdges)
        {
            if(temp == n-1) break;
            if(findSet(i.second.first) == findSet(i.second.second)) continue;
            makeUnion(i.second.first, i.second.second);
            totalCost = totalCost + i.first;
            ++temp;
        }
        if(t != 0)
            printf("%.2f\n\n", totalCost);
        else
            printf("%.2f\n", totalCost);
        sz = costOfEdges.size();
        for(int i = 0; i < sz; i++)
            costOfEdges.pop_back();
    }
    return 0;
}
