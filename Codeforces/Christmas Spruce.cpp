#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,leafs;
    scanf("%d",&n);
    vector<int> v[n+5];
    for(int i = 2; i <= n; i++)
    {
        scanf("%d",&a);
        v[a].push_back(i);
    }
    for(int i = 1; i <= n; i++)
    {
        leafs = 0;
        if(v[i].size() == 0) continue;
        for(int j = 0; j < v[i].size(); j++)
        {
            if(v[v[i].at(j)].size() == 0)
                ++leafs;
        }
        if(leafs < 3)
        {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    return 0;
}
