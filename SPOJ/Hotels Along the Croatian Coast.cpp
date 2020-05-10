#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

const int N = 3e5 + 50;
long long int money, cur, ans, n, ri, le;
int arr[N];

long long int maximumMoney()
{
    ri = le = 0;
    while(ri < n)
    {
        if(ri > le)
            le = ri;
        while(le < n)
        {
            if(arr[le] + cur <= money)
                cur += arr[le];
            else break;
            ++le;
        }
        ans = max(ans,cur);
        if(cur > 0)
            cur -= arr[ri];
        ++ri;
    }
    return ans;
}

int main()
{
    scanf("%lld%lld",&n,&money);
    for(int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("%lld\n",maximumMoney());
    return 0;
}
