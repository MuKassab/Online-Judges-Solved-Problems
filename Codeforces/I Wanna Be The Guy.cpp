#include <bits/stdc++.h>
using namespace std;
int find(int arr[], int len, int seek)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] == seek) return 1;
    }
    return 0;
}



int main()
{
    bool ok=true;
    int levels;
    int xl , yl , a , b;
    cin >> levels;
    if (levels >= 1 && levels <= 100)
    {
        cin >> xl;
        int xLevels[xl];
        for (int i = 0; i < xl; ++i)
        {
            cin >> xLevels[i];
        }
        cin >> yl;
        int yLevels[yl];
        for (int i = 0; i < yl; ++i)
        {
            cin >> yLevels[i];
        }
        int approve[levels];


        for (int i = 1; i <= levels; ++i)
        {
            a = find(xLevels, xl , i);
            b = find(yLevels, yl , i);
            if (a == 1 || b == 1)
                approve[i-1] = 1;
            else
                approve[i-1] = 0;
        }
        int lol = 0;
        for (int i = 0; i < levels; ++i)
        {
            if (approve[i] == 1)
            {

                ++lol;
            }


        }

        if (lol == levels)
        {
            cout << "I become the guy.";
        }
        else
            cout << "Oh, my keyboard!";




    }





    return 0;
}



