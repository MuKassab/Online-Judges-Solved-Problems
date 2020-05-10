#include<bits/stdc++.h>

using namespace std;

bool customSort(pair<int , int> a, pair<int , int> b)
{
    if(a.first != b.first) return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    int r, c, k, q, a, b, t, w;
    cin >> r >> c >> k >> q;
    vector< pair<int, int> > v(k);
    for(int i = 0; i < k; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end(), customSort);
    while(q--)
    {
        cin >> a >> b;
        t = a * c;
        t -= (c - b);
        w = 0;
        for(int i = 0; i < k; i++)
        {
            if(v[i].first < a) --t;
            else if(v[i].first > a) break;
            else if(v[i].second == b) {w = 1; break;}
            else if(v[i].second > b) break;
            else --t;
        }
        if(w) cout << "Waste" << endl;
        else if(t % 3 == 1) cout << "Carrots" << endl;
        else if(t % 3 == 2) cout << "Kiwis" << endl;
        else cout << "Grapes" << endl;
    }
    return 0;
}



