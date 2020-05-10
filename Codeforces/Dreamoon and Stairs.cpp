#include <iostream>

using namespace std;

int main()
{
    int stairs , m , steps = 0 , c;
    cin >> stairs >> m;
    if(stairs == m)
    {
        cout << m ;
        return 0;
    }
    else if (m > stairs)
    {
        cout << "-1";
        return 0;
    }
    else
    {
        c = stairs;
        if(stairs % m == 0)
            steps = stairs / m;
        else
            steps = (stairs/m) + 1;
        if(m%2 == 0)
            steps *=m/2;
        else
            steps = m/2 + 1;
        if(m%2)
            steps -= (stairs/m)-1;
        if(steps%m == 0 && steps*2 >= stairs)
        {
            cout << steps;
            return 0;
        }
        while ((steps % m != 0 || (steps*2) <= stairs) && c > 0)
        {
            steps++;
            if(steps%m == 0 && (steps*2) >= stairs)
            {
                cout << steps;
                return 0;
            }
            --c;
        }

    }
    cout << "-1";
    return 0;
}
