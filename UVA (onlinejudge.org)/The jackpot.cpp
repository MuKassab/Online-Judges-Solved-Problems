#include <iostream>
#include <cstdio>
#include <stdio.h>

using namespace std;

int main()
{
    int n,cur, curMax , allMax,a,b;
    bool z;
    scanf("%d",&n);
    while(n != 0)
    {
        a = n;
        z = 0;
        curMax = cur = allMax = 0;
        for(int i = 0; i < a; i++)
        {
            cin >> b;
            cur += b;
            if(cur < 0)
                cur = 0;
            if(b == 0)
                z = 1;
            curMax = max(curMax,cur);
            allMax = max(curMax,allMax);
        }
        if(allMax == 0)
            puts("Losing streak.");
        else
            printf("The maximum winning streak is %d.\n",allMax);
        scanf("%d",&n);
    }
    return 0;
}
