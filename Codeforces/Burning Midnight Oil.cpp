#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

long long int n, k, low, high, mid,a,x,p,write;
bool br;
int linesOfCode()
{
    low = 1, high = 9e9;
    while(low < high)
    {
        mid = low + (high - low)/2;
        a = k, x = n, p = 0, br = 0;
        cout << "Low : " << low << " - High : " << high << " - Middle : " << mid << endl;
        while(x > 0)
        {
            a = pow(k,p);
            ++p;
            write = mid / a;
            if(write == 0)
            {
                br = 1;
                low = mid + 1;
                break;
            }
            x -= write;
        }
        if(!br)
            high = mid;
    }
    return low;
}

int main()
{
    scanf("%lld%lld",&n,&k);
    printf("%d\n",linesOfCode());
    return 0;
}
