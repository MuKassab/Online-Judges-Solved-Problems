#include<bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    int ca = 1;
    int n;
    while(cin >> n && n != 0)
    {
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr,arr+n);
        int q, a, d = 1e9, ans;
        cin >> q;
        printf("Case %d:\n",ca++);
        while(q--)
        {
            cin >> a;
            d = 1e9;
            for(int i = 0; i < n; i++)
                for(int j = 0; j < n; j++)
                {
                    if(i == j) continue;
                    if(abs(a - arr[i] - arr[j]) < d){
                            ans = arr[i]+arr[j];
                        d = abs(a - arr[i]- arr[j]);
                    }
                }
            printf("Closest sum to %d is %d.\n",a,ans);
        }
    }
    return 0;
}



