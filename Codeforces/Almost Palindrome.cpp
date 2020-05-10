#include <iostream>
#include <set>

using namespace std;

int main()
{
    string x;
    cin >> x;
    int l = x.length();
    char a , b , c , d;
    a = b = c = d = '*';
    set<char> s;
    for(int i = 0; i < l; i++)
    {
        if(s.count(x[i]))
            s.erase(x[i]);
        else
            s.insert(x[i]);
    }
    if((s.size() && l%2 == 0) || (s.size() > 1 && l%2 == 1))
    {
        cout << "NO" << endl;
        return 0;
    }
    if(l&1)
    {
        bool noChange = 1;
        for(int i = 0; i < l; i++)
            if(x[i] == *(s.begin()))
            {
                if(i != l / 2) noChange = 0;
                x[i] = x[l/2];
                x[l/2] = *(s.begin());
                break;
            }
        //cout << x;
        if(!noChange){
        for(int i = 0, j = l - 1; i < l / 2; i++,j--)
            if(x[i] != x[j])
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    for(int i = 0, j = l - 1; i < l / 2; i++,j--)
        if(x[i] != x[j])
        {
            if(a == '*')
            {
                a = x[i];
                b = x[j];
            }
            else if(c == '*')
            {
                c = x[i];
                d = x[j];
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    //cout <<a  << endl << b << endl << c << endl << d << endl;
    if(a == d && c == b)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}
