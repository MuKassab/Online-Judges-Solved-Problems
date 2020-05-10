#include <iostream>

using namespace std;

int main()
{
    int x , upper = 0 , lower = 0 , check = 0;
    cin >> x;
    int arr[x][2];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < 2; j++)
            cin >> arr[i][j];
    for (int j = 0; j < x; j++)
    {
            upper += arr[j][0];
            lower += arr[j][1];
            if (upper == lower)
                ++check;
    }
    if (upper % 2 ==0 && lower % 2 == 0)
        {
            cout << "0";
            return 0;
        }
    else if ((upper % 2 == 0 && lower % 2 != 0) || (upper % 2 != 0 && lower % 2 == 0) || check == x)
        {
            cout << "-1";
            return 0;
        }
    else
    {
        for (int i = 0; i < x; i++)
            if ( (arr[i][0] % 2 == 0 && arr[i][1] % 2 != 0) || (arr[i][0] % 2 != 0 && arr[i][1] % 2 == 0) )
            {
                cout << "1";
                return 0;
            }
    }
    cout << "-1";

    return 0;
}
