#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    if(a==b)
        cout << "YES" << endl;
    else if(a.length()&1)
        cout << "NO" << endl;
    else
    {
        string a1,a2,b1,b2;
        a1 = a.substr(0,a.length()/2);
        a2 = a.substr(a.length()/2);
        b1 = b.substr(0,b.length()/2);
        b2 = b.substr(b.length()/2);
        //sort(a1.begin(),a1.end());
        //sort(a2.begin(),a2.end());
        //sort(b1.begin(),b1.end());
        //sort(b2.begin(),b2.end());
        cout << a1 << " - " << a2 << endl;
        cout << b1 << " - " << b2 << endl;
        if((a1 == b1 && a2 == b2 ) || (a1 == b2 && a2 == b1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
