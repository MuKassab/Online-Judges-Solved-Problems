#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t, n, u, l, r, val, q, ind;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&u);
        int arr[n] = {};
        while(u--)
        {
            scanf("%d%d%d",&l,&r,&val);
            arr[l] += val;
            if(r+1 < n)
                arr[r+1] -= val;
        }
        for(int i = 1; i < n; i++)
            arr[i] += arr[i-1];
        scanf("%d",&q);
        while(q--)
        {
            scanf("%d",&ind);
            printf("%d\n",arr[ind]);
        }
    }
    return 0;
}
