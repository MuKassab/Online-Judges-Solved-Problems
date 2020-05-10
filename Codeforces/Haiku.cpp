#include <iostream>

using namespace std;

int main()
{
    string a , b , c;
    int check = 0;
    getline(cin,a);
    cin.ignore();
    getline(cin,b);
    cin.ignore();
    getline(cin,c);
    for(int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'a'||a[i] == 'e'||a[i] == 'i'||a[i] == 'u'||a[i] == 'o')
            ++check;
    }
    cout << check;
    if (check != 5)
    {
        cout << "NO";
        return 0;
    }
    check = 0;
    for(int i = 0; i < b.length(); i++)
    {
        if (b[i] == 'a'||b[i] == 'e'||b[i] == 'i'||b[i] == 'u'||b[i] == 'o')
            ++check;
    }
    cout << check << endl;
    if (check != 7)
    {
        cout << "NO";
        return 0;
    }
    check = 0;
    for(int i = 0; i < c.length(); i++)
    {
        if (c[i] == 'a'||c[i] == 'e'||c[i] == 'i'||c[i] == 'u'||c[i] == 'o')
            ++check;
    }
    cout << check << endl;
    if (check != 5)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}
