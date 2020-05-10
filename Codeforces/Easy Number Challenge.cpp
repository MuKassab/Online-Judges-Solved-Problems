#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e6 + 20;
int arr[N];

void sieve()
{
    fill(arr,arr+N,1);
    int e,q;
    for(int i = 2; i < N - 10; i++)
    {
        if(arr[i] != 1) continue;
        for(int j = i; j < N - 10; j += i)
        {
            e = 0;
            q = j;
            while(q%i == 0)
            {
                ++e;
                q /= i;
            }
            arr[j] *= (e+1);
        }
    }
}

int main()
{
    sieve();
    int a , b , c;
    scanf("%d%d%d",&a,&b,&c);
    long long int ans = 0;
    for(int i = 1; i <= a; i++)
        for(int j = 1; j <= b; j++)
            for(int k = 1; k <= c; k++)
                ans = (((ans%1073741824) + (arr[i*j*k]%1073741824))%1073741824);
    printf("%lld\n",ans);
    return 0;
}
