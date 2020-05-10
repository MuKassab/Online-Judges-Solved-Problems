#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    vector<char> l , r;
    bool ch = 0;
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] == '|')
            ch = 1;
        if(!ch)
            l.push_back(a[i]);
        else if(a[i] != '|' && ch)
            r.push_back(a[i]);
    }
    for(int i = 0; i < b.length(); i++)
    {
        if(l.size() <= r.size())
            l.push_back(b[i]);
        else
            r.push_back(b[i]);
    }
    if(l.size() == r.size())
    {
        for(int i = 0; i < l.size(); i++)
            cout << l[i];
        cout << "|";
        for(int i = 0; i < r.size(); i++)
            cout << r[i];
    }
    else
        puts("Impossible");
    return 0;
}
