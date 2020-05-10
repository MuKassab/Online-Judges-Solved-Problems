#include <iostream>

using namespace std;

int main()
{
    int x , sq = 0 , row , col;
    cin >> x;
    int arr[x][x];
    for(int i = 0;i < x; i++)
        for(int j = 0; j < x; j++)
        cin >> arr[i][j];
    for(int i = 0;i < x; i++)
    {
        for(int j = 0; j < x; j++)
        {
            row = 0; col = 0;
            for(int k = 0; k < x; k++)
            {
                row += arr[i][k];
                col += arr[k][j];
            }
            if(col > row)
                ++sq;
        }
    }
    cout << sq;
    return 0;
}
