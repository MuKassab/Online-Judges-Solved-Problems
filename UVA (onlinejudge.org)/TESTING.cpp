#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <set>
#include <utility>

using namespace std;

const int N = 110;
int testc, neighbours, connections, fr, to, cost, curCost, caseNum, sz, temp, parent[N], height[N];
vector<int> curEdges, myVec;
set< vector<int> > opt;
vector<int> ans;

void init()
{
    for(int i = 0; i < N; i++)
    {
        parent[i] = i;
        height[i] = 0;
    }
    curCost = temp = 0;
    curEdges.clear();
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
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    scanf("%d",&testc);
    while(testc--)
    {
        //edges.clear();
        opt.clear();
        myVec.clear();
        vector< pair< int, pair<int,int> > > edges(220);
        //cout << "My Size is : " << edges.size() << endl;
        scanf("%d%d",&neighbours,&connections);
        for(int i = 0; i < connections; i++)
        {
            scanf("%d%d%d",&fr,&to,&cost);
            edges[i] = make_pair(cost,make_pair(fr,to));
        }
        sort(edges.begin(),edges.begin()+connections);
        //cout << edges[0].first << endl;
        for(int i = 0; i < connections; i++)
        {
            init();
            curCost = 0;
            for(int j = 0; j  < connections; j++)
            {
                if(i == j && connections != neighbours - 1) continue;
                if(mySet(edges[j].second.first) == mySet(edges[j].second.second)) continue;
                makeUnion(edges[j].second.first, edges[j].second.second);
                ++temp;
                curCost += edges[j].first;
                curEdges.push_back(j);
                if(temp == neighbours - 1)
                {
                    sort(curEdges.begin(),curEdges.end());
                    if(opt.find(curEdges) != opt.end()) break;
                    opt.insert(curEdges);
                    myVec.push_back(curCost);
                    break;
                }
            }
        }
        sort(myVec.begin(),myVec.end());
        sz = myVec.size();
        if(sz == 0)
            //printf("Case #%d : No way\n",++caseNum);
            ans.push_back(0);
        else if(sz == 1)
            //printf("Case #%d : No second way\n",++caseNum);
            ans.push_back(1);
        else
            //printf("Case #%d : %d\n",++caseNum,myVec[1]);
            ans.push_back(myVec[1]);
    }
    sz = ans.size();
    for(int i = 0; i < sz; i++)
    {
        if(ans[i] == 0)
            printf("Case #%d : No way\n",i+1);
        else if(ans[i] == 1)
            printf("Case #%d : No second way\n",i+1);
        else
            printf("Case #%d : %d\n",i+1,ans[i]);
    }
    return 0;
}
