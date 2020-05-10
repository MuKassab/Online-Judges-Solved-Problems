#include <iostream>
#include <cstdio>
#include <stdio.h>

using namespace std;

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int routes, stops, caseNum = 0, niceness, cur, start, stop, allMax, allStart, allStop;
    scanf("%d",&routes);
    while(routes--)
    {
        scanf("%d",&stops);
        cur = stop = allMax = allStart = allStop = 0;
        start = 1;
        for(int i = 1; i < stops; i++)
        {
            scanf("%d",&niceness);
            cur += niceness;
            if(cur >= allMax)
            {
                if(allMax == cur && allStop - allStart < i+1 - start && allStart - allStop != 0)
                {
                    allStart = start;
                    allStop = i + 1;
                }
                if(allMax < cur)
                {
                    allStart = start;
                    allStop = i + 1;
                }
                allMax = cur;
            }
            if(cur < 0)
            {
                cur = 0;
                start = i+1;
            }
        }
        if(allMax > 0)
            printf("The nicest part of route %d is between stops %d and %d\n", ++caseNum, allStart, allStop);
        else
            printf("Route %d has no nice parts\n", ++caseNum);
    }
    return 0;
}
