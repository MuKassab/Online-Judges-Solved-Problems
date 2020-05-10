#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double p, q, r, s, t, u, res, i;
double low, high, mid, eps = 1e-10,ans;

double binarySearch()
{
    i = 0;
    low = 0;
    high = 1;
    mid = 0;
    while(true)
    {
        res = 0;
        if(i == 100)
            break;
        ++i;
        mid = (high + low) / 2;
        res=p*exp(-mid)+q*sin(mid)+r*cos(mid)+s*tan(mid)+t*mid*mid+u;
        //cout << i<<" - " << res << " - " << mid << endl;
        if(fabs(0-res) <= eps)
            return mid;
        if(res > 0)
            low = mid;
        else
            high = mid;
    }
    return 0;
}

int main()
{
    while(scanf("%lf %lf %lf %lf %lf %lf",&p,&q,&r,&s,&t,&u)==6)
    {
        ans = binarySearch();
        if(ans == 0)
            puts("No solution");
        else
            printf("%0.4f\n",ans);
    }
    return 0;
}
