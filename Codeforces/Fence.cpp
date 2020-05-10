#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,hole,ans = 1e9, ansInd, curr;
    scanf("%d %d",&n,&hole);
    int h[n+2];
    h[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d",&h[i]);
        h[i] += h[i-1];
    }
    for(int i = 1; i <= n; i++)
    {
        if(i+hole-1 > n)
            break;
        curr = h[i+hole-1] - h[i-1];
        if(curr < ans)
        {
            ans = curr;
            ansInd = i;
        }
    }
    printf("%d\n",ansInd);
    return 0;
}

/*
    7 3
    1 2 6 1 1 7 1
  0 1 3 9 10 11 18 19
*/
