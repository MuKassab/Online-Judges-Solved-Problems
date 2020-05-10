#include <iostream>

using namespace std;

int main()
{
    int x, even = 0;
    cin >> x;
    string arr[x+2] , a;
    for(int i = 0; i < x; i++)
    {
        arr[0] += "*";
        arr[x+1] += "*";
    }
    arr[0] += "**";
    arr[x+1] += "**";
    for(int i = 1; i < x+1; i++)
    {
        cin >> a;
        arr[i] = "*" + a + "*";
    }
    for(int i = 1; i < x+1; i++)
    {
        for(int j = 1; j < x+1; j++)
        {
            even = 0;
            if(arr[i][j+1] == 'o')
                ++even;
            if(arr[i][j-1] == 'o')
                ++even;
            if(arr[i+1][j] == 'o')
                ++even;
            if(arr[i-1][j] == 'o')
                ++even;
            if(even%2)
            {
                cout << "NO";
                return 0;
            }
        }

    }
    cout << "YES";
    return 0;
}
