#include <iostream>

using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b;
    if(a.length() > b.length())
    {
        c = a;
        a = b;
        b = c;
    }
    int l = a.length(), x = b.length();
    bool check = 0;
    for(int i = 0; i < l; i++)
    {
        if(a[i] != b[i])
            check = 1;
    }
    if(check || x > l)
        cout << x;
    else
        cout << -1 << endl;
    return 0;
}
