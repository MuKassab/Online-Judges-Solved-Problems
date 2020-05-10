#include <iostream>
#include <set>

using namespace std;

int main()
{
    string str,a,str2;
    int n;
    set<string> s;
    cin >> str >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        str2 = a.substr(0,str.length());
        if(str2 == str)
            s.insert(a);
    }
    if(!s.empty())
        cout << *s.begin() << endl;
    else
        cout << str << endl;
    return 0;
}
