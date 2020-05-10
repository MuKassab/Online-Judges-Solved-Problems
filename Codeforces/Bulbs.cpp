#include <iostream>
#include <cstdio>
#include <set>

using namespace std;

int n,m,a,b;
set<int> bulbs;

int main()
{
    scanf("%d%d",&n,&m);
    while(n--)
    {
        scanf("%d",&a);
        while(a--)
        {
            scanf("%d",&b);
            bulbs.insert(b);
        }
    }
    if(bulbs.size() == m)
        puts("YES");
    else
        puts("NO");
    return 0;
}
