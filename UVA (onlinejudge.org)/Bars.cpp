#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdio.h>

using namespace std;

const int N = 30;
int arr[N], t, reql, n,cur;
bool done = 0;


int main()
{
    ///SOLUTION WITH BITMASK
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    scanf("%d",&t);
    while(t--)
    {
        done = 0;
        scanf("%d\n%d",&reql,&n);
        for(int i = 0; i < n; i++)
            scanf("%d",arr+i);
        for(int i = 0; i < pow(2,n); i++)
        {
            cur = 0;
            for(int j = 0; j < 20; j++)
            {
                if(i & 1 << j) cur += arr[j];
                if(cur == reql) done = 1;
                if(done) break;
            }
        }
        if(done) puts("YES");
        else puts("NO");
    }
    return 0;
}
