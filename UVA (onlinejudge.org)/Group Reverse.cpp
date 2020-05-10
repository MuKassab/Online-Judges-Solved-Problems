#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int x,gl;
    char a[120];
    cin >> x;
    while(x != 0)
    {
        cin >> a;
        string b = a;
        gl = b.length() / x;
        //cout << gl << endl;
        for(int i = 0; i < b.length();i += gl)
            reverse(a+i,a+i+gl);
        cout << a << endl;
        cin >> x;
    }
    return 0;
}
