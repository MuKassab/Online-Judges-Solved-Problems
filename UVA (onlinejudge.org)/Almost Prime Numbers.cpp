#include <iostream>
#include <cstdio>
#include <math.h>
#include <stdio.h>

using namespace std;

const int N = 1e6 + 10;
bool num[N];

void sieve(){
	fill(num, num+N, 1);
	num[0] = num[1] = 0;
	for(int i = 2 ; i < N - 5; ++i){
		if(num[i]){
			for(int j = i*2 ; j < N - 5; j += i){
				num[j] = 0;
			}
		}
	}
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    sieve();
    int n,p;
    scanf("%d",&n);
    long long int l , h, w, ans;
    while(n--)
    {
        scanf("%lld%lld",&l,&h);
        ans = 0;
        for(int i = 2; i < 1000000; i++)
        {
            p = 2;
            if(i > h) break;
            if(num[i] == 0) continue;
            while(true)
            {
                w = pow(i,p);
                if(w > h) break;
                if(w >= l && w <= h) ++ans;
                ++p;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
