#include <iostream>
#include <cstdio>
#include <math.h>
#include <stdio.h>

using namespace std;

const int N = 1e8+50;
int n,r,b,arr[N],x,gd;
bool ch;

void sieve()
{
    arr[0] = arr[1] = 0;
    for(int i = 2; i <= 464; i++)
    {
        arr[i*i*i] = i;
    }
}


int main()
{
    sieve();
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    scanf("%d",&x);
    while(x != 0)
    {
        r = sqrt(x);
        ch = 0;
        for(int i = 1; i <= 464; i++)
        {
            n = x;
            b = i * i * i;
            n += b;
            gd = arr[n];
            if(gd == 0) continue;
            printf("%d %d\n",gd,i);
            ch = 1;
            break;
        }
        if(!ch)
            puts("No solution");
        scanf("%d",&x);
    }
    return 0;
}
