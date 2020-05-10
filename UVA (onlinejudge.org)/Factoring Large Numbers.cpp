#include <bits/stdc++.h>

using namespace std;

#define timesaver         ios::sync_with_stdio(0);cin.tie(0);
#define sz(v)			  ((int)((v).size()))
#define clr(v)		      memset(v, 0, sizeof(v))
#define loops(i, v)		  for(int i=0;i<sz(v);++i)
#define loop(i, n)		  for(int i=0;i<(int)(n);++i)
#define loopi(i, j, n)	  for(int i=(j);i<(int)(n);++i)
#define loopd(i, j, n)    for(int i=(j);i>=(int)(n);--i)
#define pb			      push_back

const double EPS = 1e-7;

const int N = 1e7;

vector<int> p;
int arr[N];
long long int n;

void Sieve()
{
    arr[0] = arr[1] = 1;
    for(int i = 0; i < N; ++i)
    {
        if(arr[i]) continue;
        p.push_back(i);
        for(int j = i+i; j < N; j+=i)
            arr[j] = 1;
    }
}

void e3mlElSa7()
{
    long long int e, x;
    x = n;
    for(int i = 0; i < p.size(); i++)
    {
        e = p[i];
        if(e*e > x) break;
        while(n % e == 0)
        {
            n /= e;
            printf("    %lld\n",e);
        }
    }
    if(n != 1)
        printf("    %lld\n",n);
    puts("");
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	//timesaver;
	//*************************************************************************
	Sieve();
	scanf("%lld",&n);
	while(n > 0)
    {
        e3mlElSa7();
        scanf("%lld",&n);
    }
    return 0;
}
//*.*.
