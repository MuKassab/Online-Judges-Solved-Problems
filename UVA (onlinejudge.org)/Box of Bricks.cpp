#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int caseNum = 0;
    while(cin >> n && n != 0)
    {
        int arr[n];
        int ans = 0, t = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            t += arr[i];
        }
        t /= n;
        for(int i = 0; i < n; i++)
            if(arr[i] > t)
                ans += arr[i] - t;
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",++caseNum,ans);
    }
    return 0;
}
