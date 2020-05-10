#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    map<char,int> m;
    m['A'] = 0;
    m['B'] = 0;
    m['C'] = 0;
    for(int i = 0; i < 3; i++)
    {
        cin >> x;
        if(x[1] == '>')
            ++m[x[0]];
        else
            ++m[x[2]];
    }
    if(m['A'] != 2 && m['B'] != 2 && m['C'] != 2)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    if(m['A'] == 2)
    {
        if(m['B'] == 1)
            cout << "CBA";
        else
            cout << "BCA";
    }
    else if(m['B'] == 2)
    {
        if(m['A'] == 1)
            cout << "CAB";
        else
            cout << "ACB";
    }
    else{
        if(m['A'] == 1)
            cout << "BAC" << endl;
        else
            cout << "ABC" << endl;
    }
    return 0;
}
