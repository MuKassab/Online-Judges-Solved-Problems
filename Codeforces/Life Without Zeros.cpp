#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    stringstream x , y , z;
    long long int a , b , c;
    cin >> a >> b;
    c = a + b;
    x << a;
    string f = x.str();
    y << b;
    string s = y.str();
    z << c;
    string r = z.str();
    while (f.find('0') >= 0 && f.find('0') < f.length())
        {
            f.erase(f.find('0'),1);
        }
    while (s.find('0') >= 0 && s.find('0') < s.length())
        s.erase(s.find('0'),1);
    while (r.find('0') >= 0 && r.find('0') < r.length())
        r.erase(r.find('0'),1);
    a =  stoi(f); b =  stoi(s); c =  stoi(r); ///WHY ISN'T STOI WORKIGN HERE ?!!
    if (a+b == c)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
