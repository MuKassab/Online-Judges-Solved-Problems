#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q, a, b;
    long long int sum = 0;
    cin >> n >> q;
    int arr[n+1];
    arr[0] = 0;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    int sorted[n+5] = {};
    for(int i = 0; i < q; i++)
    {
        cin >> a >> b;
        sorted[a]++;
        sorted[b+1]--;
    }
    for(int i = 1; i < n+1; i++)
        sorted[i] += sorted[i-1];
    sort(arr+1, arr+n+1);
    vector<int> v(sorted, sorted+n+1);
    sort(v.begin(),v.end());
    //cout << v.size() << endl;
    /*for(int i = n; i >= 0; i--){

        cout <<"vec -- > " << i << " " << v[i] << endl;
        cout <<"arr -- > " << i << " " << arr[i] << endl;

    }*/
    for(int i = n; i >= 0; i--)
        sum += (long long int) v[i] * arr[i];
    cout << sum << endl;
    return 0;
}
