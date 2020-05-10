#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e6;
int arr[N], n, k, le, ri, ans, change,ln,start = -1,stop = -1;

void length()
{
    ans = 0, ri = 0, le = 0;
    change = k;
    while(ri < n)
    {
        if(le < ri)
            le = ri;
        while(le < n)
        {
            if(arr[le] == 0 && change > 0) {ln++; --change;}
            else if(arr[le] == 0 && change == 0) break;
            else if(arr[le] == 1) ++ln;
            ++le;
        }
        if(arr[ri] == 0 && k > 0) ++change;
        if(ln > ans){start = ri; if(arr[le] == 1)stop = le; else stop = le - 1; ans = ln;}
        if(ln > 0) --ln;
        ++ri;
    }
    printf("%d\n",ans);
    for(int i = 0; i < n; i++)
    {
        if(i >= start && i <= stop)
            printf("%d ",1);
        else
            printf("%d ",arr[i]);
    }
}

int main()
{
    scanf("%d%d",&n,&k);
    for(int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    length();
    return 0;
}
