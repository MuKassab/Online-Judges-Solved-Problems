#include <iostream>

using namespace std;

int main()
{
    string x;
    int l = 0, u = 0;
    cin >> x;
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] < 97)
            ++u;
        else
            ++l;
    }
    if(u > l)
        for(int i = 0; i < x.length(); i++)
            cout << (char)toupper(x[i]);
    else
        for(int i = 0; i < x.length(); i++)
            cout << (char)tolower(x[i]);
    return 0;
}
