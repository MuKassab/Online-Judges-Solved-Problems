#include <bits/stdc++.h>

using namespace std;

bool palindrome(string a)
{
    for(int i = 0, j = a.length()-1; i <= (a.length()/2 - 1); i++, j--)
    {
        if(a[i] != a[j])
            return false;
    }
    return true;
}

int main()
{
    string x;
    bool ch;
    cin >> x;
    /*if(x.length() % 2 == 0)
    {
        ch = palindrome(x);
        if(ch)
        {
            cout << x;
            return 0;
        }
    }*/
    string y = x;
    reverse(y.begin(), y.end());
    cout << x << y << endl;
    return 0;
}
