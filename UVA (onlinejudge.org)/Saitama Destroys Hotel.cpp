#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int passgNum, topF, maxT = 0,a,ans = 0;
    cin >> passgNum >> topF;
    int arr[passgNum];
    for(int i = 0; i <passgNum; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        maxT = max(maxT,arr[i][1]);
    }
    sort(arr,arr+passgNum, greater<int>() );
    a = maxT;
    for(int i = 0; i < passgNum; i++)
    {
        ans += topF - arr[i][0];
        a -= (topF - arr[i][0]);
        topF = arr[i][0];
        if(maxT - a >= arr[i][1]) continue;
        ans += (a - arr[i][1]);
        a -= arr[i][1];
    }
    return 0;
}
