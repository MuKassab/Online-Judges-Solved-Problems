#include <iostream>

using namespace std;

int main()
{
    int n,home,ans = 0;
    cin >> n >> home;
    bool arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    if(arr[home - 1]) ans++;
    for(int i = home-2, j = home; i >= 0 || j < n; i--, j++)
    {
        if(i >= 0 && j < n)
        {
            if(arr[i] && arr[j])
                ans += 2;
        }
        else if(i >= 0)
        {
            if(arr[i])
                ++ans;
        }
        else if(arr[j])
            ++ans;
    }
    cout << ans << endl;
    return 0;
}
