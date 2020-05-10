#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int q, packs, x, diss = 0;
    char a;
    scanf("%lld%lld",&q,&packs);
    //printf("%lld %lld\n",q,packs);
    while(q--)
    {
        scanf("\n%c%lld",&a,&x);
        //printf("%c",a);
        if(a == '+')
            packs += x;
        else if(a == '-' && packs >= x)
            packs -= x;
        else
            ++diss;
    }
    printf("%lld %lld\n",packs,diss);
    return 0;
}
