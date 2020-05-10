#include <iostream>

using namespace std;

int main()
{
    int t,r,c,s;
    int z , x, v , b;
    char col;
    cin >> t;
    while(t--)
    {
        cin >> r >> c >> s;
        char arr[r][c];
        while(s--)
        {
            cin >> z >> x >> v >> b >> col;
            for(int i = z-1; i < v; i++)
                for(int j = x-1; j < b; j++)
                    arr[i][j] = col;
        }
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            if(arr[i][j] != '\0')
                cout << arr[i][j];
            else
                cout << ".";
            cout << endl;
        }
    }
    return 0;
}
