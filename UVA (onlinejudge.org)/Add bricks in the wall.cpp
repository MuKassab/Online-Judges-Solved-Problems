#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[10][10];
        for(int i = 0; i < 10; i++)
            for(int j = 0; j < 10; j++)
                arr[i][j] = 0;
        for(int i = 1; i <= 9; i+= 2)
            for(int j = 1; j <= i; j+=2)
                scanf("%d",&arr[i][j]);
        for(int i = 1; i <= 7; i+= 2)
        {
            for(int j = 1; j <= i; j+=2)
            {
                arr[i+2][j+1] = (arr[i][j] - arr[i+2][j] - arr[i+2][j+2])/2;
            }
        }
        for(int i = 8; i >= 2; i-=2)
        {
            for(int j = 1; j <= i; j++)
            {
                arr[i][j] = arr[i+1][j] + arr[i+1][j+1];
            }
        }
        for(int i = 1; i <= 9; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(j == 1)
                    printf("%d",arr[i][j]);
                else
                    printf(" %d",arr[i][j]);
            }
            puts("");
        }
    }
    return 0;
}
