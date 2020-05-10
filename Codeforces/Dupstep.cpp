#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cin >> a;
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] == 'W' && a.length()-i >= 3)
        {
            if(a[i+1] == 'U')
            {
                if(a[i+2] == 'B')
                {
                    a[i] = '/';
                    a[i+1] = '/';
                    a[i+2] = '/';
                }
            }
        }
    }
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] != '/')
        {
            cout << a[i];
            if(a[i+1] == '/' && a.length()-i >=1)
                cout << " ";
        }
    }
    return 0;
}
