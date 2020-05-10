#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int n,x,y,z,m,ans = 0;
    pair<vector<long long int>::iterator,vector<long long int>::iterator> p;
    cin >> n;
    int a[n] , b[n] , c[n] , d[n];
    vector<long long int> ab, cd;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y >> z >> m;
        a[i] = x;
        b[i] = y;
        c[i] = z;
        d[i] = m;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            ab.push_back(a[i]+b[j]);
            cd.push_back(c[i]+d[j]);
        }
    }
    sort(ab.begin(),ab.end());
    sort(cd.begin(),cd.end());
    for(int i = 0; i < ab.size(); i++)
    {
        p = equal_range(cd.begin(),cd.end(), -1 * ab.at(i));
        //cout << p.second - p.first << endl;
        //cout << ab.at(i) << " - " << cd.at(i) << endl;
        ans += p.second-p.first;
    }
    cout << ans;
    return 0;
}
