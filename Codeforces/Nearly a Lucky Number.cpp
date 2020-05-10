#include <iostream>

using namespace std;

int main()
{
    string a;
    int b = 0;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '4' || a[i] == '7')
            ++b;
    }
    if (b == 4 || b == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
