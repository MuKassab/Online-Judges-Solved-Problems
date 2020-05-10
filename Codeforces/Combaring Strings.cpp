#include <iostream>

using namespace std;

int main()
{
    string a , b;
    int wrong = 0;
    cin >> a >> b;
    char c , d , e , f;
    if(a.length() != b.length())
    {
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] != b[i])
        {
            if(wrong == 0)
            {
                c = a[i]; d = b[i];
            }
            else
            {
                e = a[i]; f = b[i];
            }
            ++wrong;
        }
    }
    if(wrong == 1 || wrong > 2)
        cout << "NO";
    else
    {
        if(wrong == 0)
            cout << "YES";
        else
        {
            if(c == f && d == e)
                cout << "YES";
            else
                cout << "NO";
        }
    }
    return 0;
}
