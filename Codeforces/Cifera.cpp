#include <iostream>

using namespace std;

int main()
{
    long long int a , b , c = 0 , e;
    cin >> a >> b;
    if(b%a)
        cout << "NO";
    else
    {
        e = a;
        while(b!=a && a <= b)
        {
            a=a*e;
            ++c;
        }
        if(a == b)
        {
            cout << "YES" << endl;
            cout << c;
        }
        else
            cout << "NO";
    }
    return 0;
}
