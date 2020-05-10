#include <iostream>

using namespace std;

int main()
{
    int n, xT = 1, yT = 1,type, x , y;
    cin >> n;
    while(n--)
    {
        cin >> type >> x >> y;
        if(x < 0)
        {
            y += (-1*x);
            x = 0;
        }
        if(y < 0)
        {
            x += (-1*y);
            y = 0;
        }
        if(type == 1)
            xT = xT + x - y;
        else
            yT = yT + x - y;
    }
    if(xT <= 0 || yT <= 0)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << "(" << xT << ", " << yT << ")" << endl;
    }
    return 0;
}
