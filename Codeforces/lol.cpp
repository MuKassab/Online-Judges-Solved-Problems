#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("alan.in","r",stdin);
    long long t, d, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> d >> a >> b;
        cout << a*a*d << " " << b*b*d << " " << (a*a*d)+(b*b*d) << endl;
    }
    return 0;
}
