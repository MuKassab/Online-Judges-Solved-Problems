#include <iostream>

using namespace std;

int main()
{
    int t;
    string a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(a.length() == b.length())
        {
            bool ch = 1;
            for(int i = 0; i < a.length(); i++)
            {
                a[i] = tolower(a[i]);
                b[i] = tolower(b[i]);
                if((a[i] == b[i]) || (a[i] == 'p' && b[i] == 'b') || (a[i] == 'i' && b[i] == 'e') || (b[i] == 'p' && a[i] == 'b') || (b[i] == 'i' && a[i] == 'e'))
                    continue;
                ch = 0;
                break;
            }
            if(ch)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}
