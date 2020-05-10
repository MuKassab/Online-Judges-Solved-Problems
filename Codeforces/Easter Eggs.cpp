#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    while(x != 0)
    {
        if(x >= 7)
        {
            cout << "ROYGBIV";
            x-= 7;
        }
        else
        {
            if(x == 6)
            {
                cout << "ROYGBI";
                x-=6;
            }
            else if(x == 5)
            {
                cout << "ROYGB";
                x-=5;
            }
            else if(x == 4)
            {
                cout << "ROYG";
                x-=4;
            }
            else if(x == 3)
            {
                cout << "YGB";
                x-=3;
            }
            else if(x == 2)
            {
                cout << "GB";
                x-=2;
            }
            else
            {
                cout << "G";
                x-=1;
            }
        }
    }
    return 0;
}
