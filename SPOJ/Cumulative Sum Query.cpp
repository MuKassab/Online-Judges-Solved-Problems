#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+5] = {};
    int q, l, r;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 1; i < n; i++)
        arr[i] += arr[i-1];
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d%d",&l,&r);
        if(l == 0)
            printf("%d\n",arr[r]);
        else //if(r+1 >= n || l == r)
            printf("%d\n",arr[r]-arr[l-1]);
        //else
            //printf("%d\n",arr[r+1]-arr[l-1]);
    }
    return 0;
}
