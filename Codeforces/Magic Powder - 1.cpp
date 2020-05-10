#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e6+50;
long long int req[N],n,k,pos[N];

long long int cookies()
{
    long long int lo = 0, hi = 9e9, mid, powder = k;
    bool br;
    while(lo < hi)
    {
        mid = lo + (hi - lo + 1)/2;
        br = 0;
        //cout << "1* mid : " << mid << " - low : " << lo << " - high : " << hi << endl;
        for(long long int i = 0; i < n; i++)
        {
            if(pos[i] / req[i] < mid)
            {
                if(mid * req[i] <= pos[i] + powder)
                {
                    powder -= (mid*req[i]) - pos[i];
                }
                else
                {
                    hi = mid - 1;
                    powder = k;
                    br = 1;
                    break;
                }
            }
        }
        //cout << "2* mid : " << mid << " - low : " << lo << " - high : " << hi << endl;
        if(!br)
            lo = mid;
        powder = k;
        //cout << "3* mid : " << mid << " - low : " << lo << " - high : " << hi << endl;
    }
    return lo;
}

int main()
{
    scanf("%lld%lld",&n,&k);
    for(int i = 0; i < n; i++)
        scanf("%lld",&req[i]);
    for(int i = 0; i < n; i++)
        scanf("%lld",&pos[i]);
    printf("%lld",cookies());
    return 0;
}
