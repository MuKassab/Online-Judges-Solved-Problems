#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <stdio.h>
#include <algorithm>
#include <cstdio>

using namespace std;

bool custom(pair<int,int> a, pair<int,int> b)
{
    if(a.first > b.first)
        return false;
    else if(a.first == b.first)
    {
        if(a.second > b.second)
            return true;
        if(b.second >= a.second)
            return false;
    }
    else if(a.first < b.first)
        return true;
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t, po, a, b;
    scanf("%d",&t);
    while(t--)
    {
        vector< pair<int,int> > v;
        scanf("%d",&po);
        while(po--)
        {
            scanf("%d%d", &a , &b);
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end(),custom);
        for(int i = 0; i < v.size(); i++)
            printf("%d %d\n", v.at(i).first , v.at(i).second);
    }
    return 0;
}
