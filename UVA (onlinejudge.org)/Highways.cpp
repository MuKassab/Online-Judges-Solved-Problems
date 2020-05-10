#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>

using namespace std;

const int N = 1020;
int tc, towns, roads, parent[N], height[N], temp, sz, fr, to;
double loc[N][2], dist;
vector< pair< double, pair< int, int > > > edges;
bool roadsNeeded;

void init()
{
    sz = edges.size();
    for(int i = 0; i < sz; i++)
        edges.pop_back();
    for(int i = 1; i < N; i++)
    {
        height[i] = 0;
        parent[i] = i;
    }
    roadsNeeded = 0;
    temp = dist = 0;
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
    //freopen("o.txt","w",stdout);
    scanf("%d",&tc);
    while(tc--)
    {
        init();
        scanf("%d",&towns);
        for(int i = 1; i <= towns; i++)
        scanf("%lf%lf",&loc[i][0],&loc[i][1]);
        scanf("%d",&roads);
        for(int i = 0; i < roads; i++)
        {
            scanf("%d%d",&fr,&to);
            //cout << fr << " ** " << to << endl;
            if(mySet(fr) == mySet(to)) continue;
            ++temp;
            makeUnion(fr, to);
        }
        /*cout << temp << endl;
        cout << "--------------------------------" << endl;
        for(int i = 1; i <= towns; i++)
            cout << i << " ---> " << parent[i] << endl;*/
        for(int i = 1; i <= towns; i++)
        {
            for(int j = i+1; j <= towns; j++)
            {
                dist = sqrt(pow(loc[i][0]-loc[j][0],2) + pow(loc[i][1]-loc[j][1],2));
                edges.push_back({dist, {i,j}});
            }
        }
        sort(edges.begin(),edges.end());
        for(auto e : edges)
        {
            if(temp == towns - 1) break;
            if(mySet(e.second.first) == mySet(e.second.second)) continue;
            makeUnion(e.second.first,e.second.second);
            ++temp;
            roadsNeeded = 1;
            printf("%d %d\n",e.second.first,e.second.second);
        }
        if(!roadsNeeded)
            puts("No new highways need");
        if(tc != 0)
            puts("");
    }
    return 0;
}
