#include <iostream>
#include <cstdio>

using namespace std;

int wps, dps, s, low , high , mid,d,pass,x,t,q;
bool br;

int seconds()
{
    low = 0, high = 1e6 + 1000;
    x = s;
    while(low < high)
    {
        mid = low + (high - low)/2;
        s = x;
        br = 0;
        d = mid * dps;
        t = s * wps;
        //cout << "Low : " << low << " - Middle : " << mid << " - High : " << high << endl;
        //cout << "Downloaded : " << d << " - Total : " << t << endl;
        if(d >= t) {high = mid; continue;}
        while(s > 0)
        {
            d += dps;
            if(d < wps)
            {
                br = 1;
                low = mid + 1;
                break;
            }
            d -= wps;
            --s;
        }
        if(!br)
            high = mid;
        s = x;
    }
    return low;
}

int main()
{
    scanf("%d%d%d",&wps,&dps,&s);
    printf("%d",seconds());
    return 0;
}
