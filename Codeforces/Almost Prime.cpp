#include <iostream>
#include <cstdio>

using namespace std;

int markedWithGreatestPrimeDivisor[3100];

void mWGPD()
{
    fill(markedWithGreatestPrimeDivisor,markedWithGreatestPrimeDivisor+3100,1);
    markedWithGreatestPrimeDivisor[0] = markedWithGreatestPrimeDivisor[1] = 0;
    for(int i = 2; i < 3050; i++)
    {
        if(markedWithGreatestPrimeDivisor[i] == 1)
            for(int j = i; j < 3050; j+=i)
                markedWithGreatestPrimeDivisor[j] = i;
    }
}

int main()
{
    mWGPD();
    int n,ans = 0,e,gd;
    scanf("%d",&n);
    for(int i = 6; i <= n; i++)
    {
        gd = markedWithGreatestPrimeDivisor[i];
        e = i;
        while(e % gd == 0)
            e /= gd;
        if(e == 1) continue;
        gd = markedWithGreatestPrimeDivisor[e];
        while(e % gd == 0)
            e /= gd;
        if(e == 1) ++ans;
    }
    printf("%d\n",ans);
    return 0;
}
