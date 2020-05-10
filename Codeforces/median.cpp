#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, med,q,hi,lo,ans = 0;
    cin >> n >> med;
    int arr[n+1],x[n+1];
    for(int i = 1; i <= n; i++)
    {
        cin >> x[i];
        arr[i] = i;
    }
    sort(x+1,x+n+1);
    //cout << x[1] << " - " << x[n] << endl;
    for(int i = 1; i <= n; i++)
    {
        //cout << i << " - " << x[i] << endl;
        if(x[i] == med)
        {
            ++ans;
            ans += min(n-i,i-1);
        }
    }
    cout << ans << endl;
    return 0;
}
