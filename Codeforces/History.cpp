#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n,s,e,en,ans = 0;
    scanf("%d",&n);
    vector< pair<int,int> > v;
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d",&s,&e);
        v.push_back(make_pair(s,e));
    }
    sort(v.begin(),v.end());
    en = v.at(0).second;
    for(int i = 1; i < n; i++)
    {
        if(v.at(i).second < en)
            ++ans;
        else
            en = v.at(i).second;
    }
    printf("%d\n",ans);
    return 0;
}
