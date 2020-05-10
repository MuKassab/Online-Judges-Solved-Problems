#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n,a,fuel;
    bool ch;
    scanf("%d",&n);
    while(n!= 0)
    {
        int arr[1424] = {0};
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&a);
            arr[a] = 1;
        }
        ch = 1;
        fuel = 0;
        for(int i = 0; i <= 1422; i++)
        {
            if(arr[i] == 1)
            {
                fuel = 200;
                continue;
            }
            --fuel;
            if(fuel <= 0 && i != 1422)
            {
                ch = 0;
                //cout << i << endl;
                puts("IMPOSSIBLE");
                break;
            }
        }
        //cout << "F" << fuel << endl;
        for(int i = 1422; i >= 0 && ch; i--)
        {
            if(arr[i] == 1)
            {
                fuel = 200;
                continue;
            }
            --fuel;
            if(fuel <= 0 && i != 0)
            {
                ch = 0;
                //cout << i << endl;
                puts("IMPOSSIBLE");
                break;
            }
        }
        if(ch)
            puts("POSSIBLE");
        scanf("%d",&n);
    }
    return 0;
}

/*
0   1   2    3
3   2   1    0

*/
