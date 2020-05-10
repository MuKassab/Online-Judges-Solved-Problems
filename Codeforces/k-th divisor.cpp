#include <iostream>
#include <vector>
#include <math.h>
#include <cstdio>
#include <algorithm>

using namespace std;

vector<long long int> divis;

void X(long long int a)
{
    long long int q = (sqrt(a));
    for(long long int i = 1; i <= q; i++)
    {
        if(a % i == 0)
        {
            divis.push_back(i);
            if(i*i == a) continue;
            divis.push_back(a/i);
        }
    }
}

int main()
{
    long long int n , k;
    scanf("%lld%lld",&n,&k);
    X(n);
    sort(divis.begin(),divis.end());
    if(k > divis.size())
        cout << -1 << endl;
    else
        cout << divis.at(k-1) << endl;
    return 0;
}
