#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    int chc , prc, s, e,ans = 0;
    scanf("%d",&chc);
    vector< pair<int,int> > chs , che, prs ,pre;
    for(int i = 0; i < chc; i++)
    {
        scanf("%d%d",&s,&e);
        che.push_back(make_pair(e,s));
        chs.push_back(make_pair(s,e));
    }
    cin >> prc;
    for(int i = 0; i < prc; i++)
    {
        scanf("%d%d",&s,&e);
        pre.push_back(make_pair(e,s));
        prs.push_back(make_pair(s,e));
    }
    sort(che.begin(),che.end());
    sort(chs.begin(),chs.end());
    sort(prs.begin(),prs.end());
    sort(pre.begin(),pre.end());
    ans = max(ans,max(prs[prc-1].first-che[0].first,chs[chc-1].first-pre[0].first));
    printf("%d\n",ans);
    return 0;
}
