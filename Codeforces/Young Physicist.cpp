#include <iostream>

using namespace std;

int main()
{
    int forces , x = 0 , y = 0 , z = 0;
    cin >> forces;
    int vectors[forces][3];
    for (int i = 0; i < forces; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cin >> vectors[i][j];
    }
    for (int i = 0; i < forces; ++i)
    {
        x = x + vectors[i][0];
        y = y + vectors[i][1];
        z = z + vectors[i][2];
    }
    if (x == 0 && y == 0 && z == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
