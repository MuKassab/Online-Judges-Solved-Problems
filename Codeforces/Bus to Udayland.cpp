#include <iostream>

using namespace std;

int main()
{
    int rows,i = 0,x;
    cin >> rows;
    x = rows;
    string arr[rows];
    bool sit = 0;
    while(rows--)
    {
        cin >> arr[i++];
        if(sit)
            continue;
        if(arr[i-1][0] == 'O' && arr[i-1][1] == 'O')
        {
            arr[i-1][0] = arr[i-1][1] = '+';
            sit = 1;
            continue;
        }
        if(arr[i-1][3] == 'O' && arr[i-1][4] == 'O')
        {
            arr[i-1][3] = arr[i-1][4] = '+';
            sit = 1;
        }
    }
    if(sit)
    {
        cout << "YES" << endl;
        for(int i = 0; i < x; i++)
            cout << arr[i] << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
