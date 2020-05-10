#include <iostream>

using namespace std;

int main()
{
    string s , a , b = "5";
    cin >> s;
    int h , e , l , l2 , o;
    a = s;
    for (int i = 0; i < s.length(); ++i)
    {
        h = s.find('h');
        if (h < 0 || h > s.length())
            h=100;
        e = s.find('e');
        if (e < 0 || e > s.length())
            e=0;
        if (e < h)
            s.replace(e,1," ");
        l = s.find('l');
        if (l < 0 || l > s.length())
            l=0;
        a.replace(l,1," ");
        if (l < e)
            s.replace(l,1," ");
        l2 = a.find('l');
        if (l2 < 0 || l2 > s.length())
            l2=0;
        o = a.find('o');
        if (o < 0 || o > s.length())
            o=0;
        if (o < l2)
            a.replace(o,1," ");
        if (e > h && l > e && l2 > l && o > l2)
        {
            b = "YES";
            cout << b;
            break;
        }
    }
    if (b != "YES")
        cout << "NO";
    return 0;
}
