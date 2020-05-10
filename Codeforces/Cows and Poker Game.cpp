#include <iostream>
#include <map>

using namespace std;

int main()
{
    long int x;
    map<char,int> m;
    cin >> x;
    string a;
    cin >> a;
    for(int i = 0; i < x; i++)
    {
        if(m.count(a[i]) == 0)
            m.insert(make_pair(a[i],1));
        else
            ++m[a[i]];
    }
    if(m.count('I') == 0)
        cout << m['A'];
    else if ((m.count('A') != 0 || m.count('F') != 0) && m['I'] == 1)
        cout << m['I'];
    else
        cout << 0;
    return 0;
}
