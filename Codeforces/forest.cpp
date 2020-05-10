#include <iostream>

using namespace std;

int main()
{
    int h, w,ans = 0,a,b,c,d;
    cin >> h >> w;
    char arr[h][w];
    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++)
            cin >> arr[i][j];
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            if(arr[i][j] != '.') continue;

        }
    }
    return 0;
}
