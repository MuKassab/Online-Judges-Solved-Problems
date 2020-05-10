#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int floor , y ,z;
    int x = 0;
    cin >> floor;
    z = abs(floor);
    for (int i = 10; i <= z; i*=10)
    {
        y = abs((floor + 1) % (i*10));
        if ((y - (y%(i))) == 8*i)
        {
            cout << "1";
            return 0;
        }
    }
    for (int i = 1; i <= 16; i++)
    {
        x++;
        floor++;
        z=abs(floor);
        if (floor % 10 == 8 || floor % 10 == -8)
            break;
        for (int i = 10; i <= z; i*=10)
        {
            y = abs((floor) % (i*10));
            if ((y - (y%(i))) == 8*i)
            {
                cout << x;
                return 0;
            }
        }
        if (floor % 10 == 0)
        {
            for (int i = 10; i <= abs(floor); i*=10)
                if (z % (i*10) == 0)
                    continue;
                else if ( z % (i*10) == 8*i)
                {
                    cout << x;
                    return 0;
                }
        }
    }
    cout << x;
    return 0;
}
