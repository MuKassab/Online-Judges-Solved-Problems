#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int n,k;
const int N = 1e4 + 30;
double low, high, mid, currPower, powers[N], eps = 1e-9, df;

double binarySearch()
{
    low = 0, high = 1001;
    int i = 0;
    while(true)
    {
        if(i == 200)
            break;
        ++i;
        mid = (high+low)/2;
        currPower = 0;
        for(int i = 0; i < n; i++)
        {
            df = powers[i] - mid;
            if(df > eps)
                currPower += df - ((df*k) / 100);
            else
                currPower += df;
        }
        if(currPower < 0)
            high = mid;
        else
            low = mid;
    }
    return (high + low)/2;
}

int main()
{
    scanf("%d%d",&n,&k);
    for(int i = 0; i < n; i++)
        scanf("%lf",&powers[i]);
    printf("%0.9f",binarySearch());
    return 0;
}
