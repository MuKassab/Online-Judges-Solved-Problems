#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, t = 0, o = 0,a;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        if(a == 100)
            ++o;
        else
            ++t;
    }
    if((t == 0 && o&1) || (o == 0 && t&1) || (t&1 && o&1))
        puts("NO");
    else if(t % 2 == 0 && o % 2 == 0)
        puts("YES");
    else if((t&1 && o%2 == 0 && (t + (o/2)) % 2 == 0))
        puts("YES");
    else
        puts("NO");
    return 0;
}
