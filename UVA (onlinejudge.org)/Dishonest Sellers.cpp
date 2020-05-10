#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a , b;
    long int ans = 0;
    cin >> a >> b;
    int ar[a],arr[a];
    //vector<pair<int,int> > v,q;
    for(int i = 0; i < a; i++)
    {
        cin >> ar[i];
        ans += ar[i];
    }
    for(int i = 0; i < a; i++)
    {
        cin >> arr[i];
        arr[i] -= ar[i];
    }
    sort(arr,arr+a);
    int x = 0;
    //cout << ans << endl;
    for(int i = 0; i < a-b; i++)
    {
        if(arr[i] < 0)
            ans += arr[i];
    }
    cout << ans << endl;
    return 0;
}
