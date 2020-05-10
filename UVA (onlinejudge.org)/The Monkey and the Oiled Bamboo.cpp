#include <iostream>
#include <cstdio>
#include <stdio.h>

using namespace std;

const int N = 1e5 + 40;
int arr[N], t, caseNum = 0, low, high, mid, n,x;
bool br;

int minimumK()
{
    low = 1, high = 1e7;
    while(low < high)
    {
        mid = low + (high - low)/2;
        x = mid;
        br = 0;
        for(int i = 1; i <= n; i++)
        {
            if(arr[i] - arr[i-1] > x)
            {
                br = 1;
                low = mid + 1;
                break;
            }
            else if(arr[i] - arr[i-1] == x)
                --x;
        }
        if(!br)
            high = mid;
    }
    return low;
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i = 1; i <= n; i++)
            scanf("%d",&arr[i]);
        printf("Case %d: %d\n",++caseNum,minimumK());
    }
    return 0;
}
