#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int a, ans = 0, odd = 0, mini = 1e9 + 50;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a & 1)
            v.push_back(a);
        else
            ans += a;
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i = 1; i < v.size(); i+=2)
    {
        ans += v[i] + v[i-1];
    }
    cout << ans << endl;
    return 0;
}
