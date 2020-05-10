#include <iostream>

using namespace std;

int main()
{
    string x;
    cin >> x;
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] == '9' && i == 0)
            cout << x[i];
        else
            if(9 - (x[i] - '0') < x[i] - '0')
            {
                x[i] = (9 - (x[i] - '0')) + '0';
                cout << x[i];
            }
            else
                cout << x[i];
    }
    return 0;
}
