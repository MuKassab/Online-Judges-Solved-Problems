#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x,ans = 0;
    bool h = 1;
    cin >> x;
    int arr[x],f[1001] = {};
    vector<int> v;
    for(int i = 0; i < x; i++)
    {
        cin >> arr[i];
        ++f[arr[i]];
    }
    while(h)
    {
        h = 0;
        for(int i = 1; i < 1001; i++)
        {
            if(f[i] > 1)
                h = 1;
            if(f[i] >= 1)
            {
                f[i]--;
                v.push_back(i);
            }
        }
    }
    for(int i = 1; i < v.size(); i++)
    {
        if(v.at(i) > v.at(i-1))
            ++ans;
    }
    cout << ans << endl;
    return 0;
}
