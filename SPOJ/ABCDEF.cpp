#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 1e6 + 20;
int abc[N],def[N],cnt1 = 0,cnt2 = 0;

int main()
{
    int ans=0;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d",arr+i);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                abc[cnt1] = (arr[i]*arr[j])+ arr[k];
                //cout << abc[cnt1] << " - " << endl;
                ++cnt1;
                if(arr[i] == 0) continue;
                def[cnt2] = arr[i]*(arr[j]+arr[k]);
                ++cnt2;
            }
        }
    }
    sort(abc,abc+cnt1);
    sort(def,def+cnt2);
    for(int i = 0; i < n*n*n ;i++)
    {
        ans += (upper_bound(def,def+cnt2,abc[i])-def) - (lower_bound(def,def+cnt2,abc[i])-def);
    }
    printf("%d",ans);
    return 0;
}
