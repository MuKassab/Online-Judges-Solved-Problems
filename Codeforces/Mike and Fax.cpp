#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a,b,c;
    cin >> a;
    int x;
    cin >> x;
    if(a.length() % x != 0)
        cout << "NO" << endl;
    else
    {
        int l = a.length() / x;
        for(int i = 0; i < a.length(); i++)
        {
            b = a.substr(i,l);
            //cout << b << endl;
            c = b;
            reverse(b.begin(),b.end());
            //cout << c << " - " << b << endl;
            if(c != b)
            {
                cout << "NO" << endl;
                return 0;
            }
            //cout << i << endl;
            i += l - 1;
        }
        cout << "YES" << endl;
    }
    return 0;
}
