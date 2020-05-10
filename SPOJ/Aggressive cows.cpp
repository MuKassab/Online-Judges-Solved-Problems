#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 1e6 + 20;
int t,hi,lo,mid,n,c,arr[N],last,temp;

int larMinDist()
{
    lo = 1, hi = 1e9;
    sort(arr,arr+n);
    while(lo < hi)
    {
        mid = lo + (hi-lo+1)/2;
        //cout << "Low : " << lo << " - Mid : " << mid << " - High : " << hi << endl;
        last = arr[0];
        temp = c-1;
        for(int i = 1; i < n; i++)
        {
            if(arr[i] - last >= mid)
            {
                last = arr[i];
                --temp;
            }
            if(temp == 0) break;
        }
        if(temp != 0)
            hi = mid - 1;
        else
            lo = mid;
        //cout << "Low : " << lo << " - Mid : " << mid << " - High : " << hi << endl;
    }
    return lo;
}

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&c);
        for(int i = 0; i < n; i++)
            scanf("%d",&arr[i]);
        printf("%d\n",larMinDist());
    }
    return 0;
}
