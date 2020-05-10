#include<bits/stdc++.h>

using namespace std;

bool customSort(pair<int , int> a, pair<int , int> b)
{
    if(a.first != b.first) return a.first < b.first;
    return a.second < b.second;
}

const double eps = 1e-9;

int main()
{
    int n, m, q, ans = 0;
    string st;
    double x, a, b, d;
    bool notValid = 0, o;
    vector< pair<int, int> > shiftKeys;
    set<char> oneHand, twoHand;
    cin >> n >> m >> x;
    char arr[n+1][m+1];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] != 'S') oneHand.insert(arr[i][j]);
            else shiftKeys.push_back({i,j});
        }
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            if(arr[i][j] == 'S') continue;
            o = 0;
            a = i; b = j;
            for(int k = 0; k < shiftKeys.size(); k++)
            {
                d = sqrt( pow((double)shiftKeys[k].first - a, 2) + pow((double)shiftKeys[k].second - b, 2) );
                if(d - x < eps) {o = 1; oneHand.insert(toupper(arr[i][j]));}
            }
            if(!o && !shiftKeys.empty()) twoHand.insert(toupper(arr[i][j]));
        }
    cin >> q >> st;
    for(int i = 0; i < q; i++)
    {
        if(oneHand.count(st[i])) continue;
        else if(twoHand.count(st[i])) ++ans;
        else return cout << -1 << endl, 0;
    }
    cout << ans << endl;
    return 0;
}



