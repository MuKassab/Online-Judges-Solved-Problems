#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int arr[x];
    for(int i = 0; i < x; i++)
        cin >> arr[i];
    long long int add = 0, ans = 0;
    sort(arr,arr+x);
    for(int i = 0; i < x; i++)
        ans += abs(i+1-arr[i]);
    cout << ans;
    return 0;
}
