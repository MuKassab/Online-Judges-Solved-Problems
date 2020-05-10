#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e6 + 20;
int arr[N][2];

void seive()
{
    for(int i = 0; i < N; i++)
    {
        arr[i][0] = 1;
        arr[i][1] = 0;
    }
    arr[0][0] = arr[1][0] = 0;
    int dec, soF = 0,num,m;
    bool add;
    for(int i = 2; i < N - 10; i++)
    {
        if(arr[i][0] == 0) continue;
        add = 1;
        dec = 1;
        m = 1;
        num = 0;
        while(dec <= i)
        {
            if((i/dec) % 10 == 0)
            {
                add = 0;
                break;
            }
            num += ((i/dec) % 10) * m;
            if(arr[num][0] == 0) {add = 0;break;}
            m *= 10;
            dec *= 10;
        }
        if(add) ++soF;
        arr[i][1] = soF;
        for(int j = i+i; j < N -10; j+=i)
        arr[j][0] = 0;
    }
}

int main()
{
    int t , n;
    seive();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i = n; i > 0; i--)
        {
            if(arr[i][0] == 1)
            {
                printf("%d\n",arr[i][1]);
                break;
            }
            if(i == 1)
                printf("%d\n",0);
        }
    }
    return 0;
}
