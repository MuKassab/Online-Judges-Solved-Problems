#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;
const int N = 1e6;
int arr[N], n, low, high;
// 1 2 3 4 5 6 7
int minimumShown()
{
    low = n/2 - 1, high = n-1;
    while(low >= 0 && high > n/2 - 1)
    {
        if(arr[high] >= arr[low]*2)
        {
            --n;
            --low;
            --high;
        }
        else
            --low;
    }
    return n;
}

int main()
{
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n);
    printf("%d\n",minimumShown());
    return 0;
}
