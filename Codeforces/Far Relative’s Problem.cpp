#include <iostream>
#include <cstdio>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    int n, l, r, male[370] = {}, female[370] = {}, maxi = 0;
    char gen;
    //freopen("i.txt","r",stdin);
    scanf("%d",&n);
    while(n--)
    {
        scanf("\n%c%d%d",&gen,&l,&r);
        if(gen == 'M')
        {
            ++male[l];
            --male[r+1];
        }
        else
        {
            ++female[l];
            --female[r+1];
        }
    }
    for(int i = 1; i < 370; i++)
    {
        male[i] += male[i-1];
        female[i] += female[i-1];
        //cout << i << " - Male is : " << male[i] << " - and Female is : " << female[i] << endl;
    }
    for(int i = 1; i < 370; i++)
            maxi = max(maxi,min(male[i],female[i]));
    printf("%d\n",2*maxi);
    return 0;
}
