#include <iostream>

using namespace std;

int main()
{
    int l , o = 0;
    cin >> l;
    string s;
    cin >> s;
    for(int i = 0; i < l; i++)
    {
        if(s[i] == '1')
            ++o;
        else
        {
            cout << o;
            o = 0;
        }
    }
    if(s[l-1] != '0')
        cout << o;
    return 0;
}
