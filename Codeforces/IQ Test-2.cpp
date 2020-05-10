#include <iostream>

using namespace std;

int main()
{
    char arr[6][6];
    bool dot = 0;
    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++)
            arr[i][j] = '-';
    for(int i = 1; i <= 4; i++)
        for(int j = 1; j <= 4; j++)
            cin >> arr[i][j];

    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            dot = 0;
            if(arr[i][j] == '.')
            {
                dot = 1;
                arr[i][j] = '#';
            }
            if(arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i+1][j] && arr[i+1][j] == arr[i+1][j+1])
            {
                cout << "YES" << endl;
                return 0;
            }
            if(arr[i][j] == arr[i][j-1] && arr[i][j] == arr[i+1][j] && arr[i+1][j] == arr[i+1][j-1])
            {
                cout << "YES" << endl;
                return 0;
            }
            if(arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i-1][j] && arr[i-1][j] == arr[i-1][j+1])
            {
                cout << "YES" << endl;
                return 0;
            }
            if(arr[i][j] == arr[i][j-1] && arr[i][j] == arr[i-1][j] && arr[i-1][j] == arr[i-1][j-1])
            {
                cout << "YES" << endl;
                return 0;
            }
            if(dot)
                arr[i][j] = '.';
        }
    }
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            dot = 0;
            if(arr[i][j] == '#')
            {
                dot = 1;
                arr[i][j] = '.';
            }
            if(arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i+1][j] && arr[i+1][j] == arr[i+1][j+1])
            {
                cout << "YES" << endl;
                return 0;
            }
            if(arr[i][j] == arr[i][j-1] && arr[i][j] == arr[i+1][j] && arr[i+1][j] == arr[i+1][j-1])
            {
                cout << "YES" << endl;
                return 0;
            }
            if(arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i-1][j] && arr[i-1][j] == arr[i-1][j+1])
            {
                cout << "YES" << endl;
                return 0;
            }
            if(arr[i][j] == arr[i][j-1] && arr[i][j] == arr[i-1][j] && arr[i-1][j] == arr[i-1][j-1])
            {
                cout << "YES" << endl;
                return 0;
            }
            if(dot)
                arr[i][j] = '#';
        }
    }
    cout << "NO" << endl;
    return 0;
}
