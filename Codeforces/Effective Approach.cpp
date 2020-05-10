#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a;
    long long int v = 0, p = 0;
    scanf("%d",&n);
    int ind[n+1];
    for(int i = 1; i <= n; i++)
    {
        scanf("%d",&a);
        ind[a] = i;
    }
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&a);
        v += ind[a];
        p += n-ind[a]+1;
    }
    printf("%lld %lld\n",v,p);
    return 0;
}
