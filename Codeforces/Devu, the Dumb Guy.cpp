#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, x;
    scanf("%lld %lld",&n,&x);
    long long int ans = 0;
    long long int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%lld",&arr[i]);
    sort(arr,arr+n);
    for(int i = 0; i < n; i++)
    {
        ans += x*arr[i];
        if(x != 1)
            --x;
    }
    printf("%lld\n",ans);
    return 0;
}
