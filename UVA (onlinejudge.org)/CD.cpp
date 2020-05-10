#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main()
{
    int len,n,cur,sum,ans;
    //bool pr;
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    while(cin >> len)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0; i < n; i++)
            scanf("%d",&arr[i]);
        cur  = 0, sum = 0;
        for(int i = 1; i < pow(2,n); i++)
        {
            cur = 0;
            for(int j = 0; j < n; j++)
            {
                if(i & (1 << j))
                    cur += arr[j];
            }
            if(cur > sum && cur <= len)
            {
                sum = cur;
                ans = i;
            }
        }
        for(int i = 0; i < n; i++)
            if(ans & (1 << i))
                printf("%d ",arr[i]);
        printf("sum:%d\n",sum);
    }
    return 0;
}
