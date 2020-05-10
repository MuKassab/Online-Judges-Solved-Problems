#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0 , c;
    string d , e , f;
    cin >> c;
    for(int i = 0; i < c; i++)
    {
        cin >> f;
        if(i==0)
            d = f;
        if(d == f)
            ++a;
        else
            {
                ++b;
                e = f;
            }
    }
    if(a > b)
        cout << d;
    else
        cout << e;
    return 0;
}
