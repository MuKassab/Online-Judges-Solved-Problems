#include <iostream>
#include <cstdio>

using namespace std;

int t, n, k, ri, le,ones;
long long int ans, curr;
const int N = 1e6 + 20;
int arr[N];
bool br;
string x;
/*
* 0101
* 0112
*
*/
long long int numOfPairs()
{
    ri = le = curr = ones = ans = 0;
    while(ri < n)
    {
        while(le < n)
        {
            if(x[le] == '0' || ones + 1 <= k)
            {
                ones += (x[le] == '1');
                curr += (ones == k);
                ans += (ones == k);
            }
            else break;
            ++le;
        }
        if(x[ri] == '0')
        {
            ans += curr;
            curr = 0;
        }
        ones -= (x[ri] == '1');
        ++ri;
    }
    return ans;
}

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        cin >> x;
        printf("%lld\n",numOfPairs());
    }
    return 0;
}
