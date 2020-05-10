#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t,m,ans;
    double val;
    char x;
    string line;
    cin >> t;
    while(t--)
    {
        map<char, pair<double,int> > myMap;
        set<char> mySet;
        cin >> m;
        while(m--)
        {
            cin >> x >> val;
            mySet.insert(x);
            myMap[x] = {val,0};
        }
        cin >> m;
        cin.ignore();
        while(m--)
        {
            //cin.ignore();
            getline(cin,line);
            //cout <<m <<"*" << line << endl;
            for(int i = 0; i < line.length(); i++)
            {
                if(mySet.count(line[i]) == 0)
                    continue;
                myMap[line[i]].second++;
            }
        }
        ans = 0;
        for(auto a: myMap)
            ans += a.second.second * a.second.first;
        printf("%d.%02d$\n",ans/100,ans%100);
        //cout << ans/100 << "." << ans%100 << "$" << endl;
    }
    return 0;
}
