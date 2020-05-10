#include <iostream>

using namespace std;

int main()
{
    int b, o = 0;
    cin >> b;
    string x;
    cin >> x;
    string a = x;
    for (int i = 0; i < x.length(); i++)
    {
        if (b%2)
        {
            a.at(b/2+o) = x.at(i);
        }
        else
        {
            a.at(b/2-1) = x.at(i);
        }
        --b;
        o+=1;
    }
    cout << a;
    return 0;
}
