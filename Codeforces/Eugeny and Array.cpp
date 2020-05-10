#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n ,m ,pos = 0, neg = 0 , a , b , c;
    scanf("%d%d",&n,&m);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a);
        if(a == 1) ++pos;
        else ++neg;
    }
    for(int j = 0; j < m; j++)
    {
        scanf("%d%d",&a,&b);
        c = b - a + 1;
        n = c / 2;
        if((c % 2 == 1) || pos == 0 || neg == 0 || a == b || n > pos || n > neg) printf("%d\n",0);
        else printf("%d\n",1);
    }
    return 0;
}
