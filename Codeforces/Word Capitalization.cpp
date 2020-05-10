#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.length() > 0 && s.length() <= 100)
    {
        s[0] = toupper(s[0]);
        cout << s;
    }
        return 0;
}
