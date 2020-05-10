#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    int x, n, a;
    cin >> x >> n;
    while(x != 0)
    {
        int p;
        vector< pair<int,int> > v;
        deque<int> odd , even , print;
        for(int i = 0; i < x; i++)
        {
            cin >> a;
            v.push_back(make_pair(a%n,a));
        }
        sort(v.begin(),v.end());
        cout << x << " " << n << endl;
        p = 0;
        for(int i = -n+1; i < n; i++)
        {
            for(p; p < v.size(); p++)
            {
                if(v.at(p).first != i)
                    break;
                if(v.at(p).second&1)
                    odd.push_back(v.at(p).second);
                else
                    even.push_back(v.at(p).second);
            }
            sort(odd.begin(),odd.end());
            sort(even.begin(),even.end());
            for(int j = odd.size()-1; j >= 0; j--)
                print.push_back(odd.at(j));
            for(int j = 0; j < even.size(); j++)
                print.push_back(even.at(j));
            odd.clear();
            even.clear();
        }
        for(int j = 0; j < print.size(); j++)
            cout << print.at(j) << endl;
        cin >> x >> n;
    }
    cout << x << " " << n << endl;
    return 0;
}
