#include <iostream>

using namespace std;

int main()
{
    long long int  a , b , c , d , maxi;
    cin >> a >> b >> c >> d;
    if (d > b)
        maxi = c-(d-b);
    else
        maxi = c;
    for (int i = 1; i < a; i++)
    {
        cin >> c >> d;
        if (d > b)
        {
            if (c-(d-b) > maxi)
                maxi = c-(d-b);
        }
        else
        {
            if (c > maxi)
                maxi = c;
        }
    }
    cout << maxi;
    return 0;
}
