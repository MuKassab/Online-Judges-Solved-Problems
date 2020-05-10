#include <iostream>

using namespace std;

int main()
{
    string a , b, c , d;
    cin >> a >> b >> c;
    d = a + b;
    if (c.length() != d.length() )
    {
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < d.length(); i++)
    {
        for(int j = 0; j < c.length(); j++)
        {
            if(d[i] == c[j])
            {
                d[i] = '9';
                c[j] = '9';
                break;
            }
        }
    }
    for(int i = 0; i < d.length(); i++)
    {
        if(d[i] != '9' || c[i] != '9')
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
