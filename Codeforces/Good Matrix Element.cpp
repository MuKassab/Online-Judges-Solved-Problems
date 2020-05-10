#include <iostream>

using namespace std;

int main()
{
    int x , sum = 0;
    cin >> x;
    int arr[x][x];
    for (int i = 0;i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> arr[i][j];
            if (i == j)
                sum += arr[i][j];
            else if (i == (x-1)/2)
                sum += arr[i][j];
            else if (j == (x-1)/2)
                sum += arr[i][j];
            else if (i+j == x-1)
                sum += arr[i][j];
        }
    }
    cout << sum;
    return 0;
}
