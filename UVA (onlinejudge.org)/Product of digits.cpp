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

vector<int> p;
int t, in;
int arr[1000000];
int e;

void Sieve()
{
    arr[0] = arr[1] = 1;
    for(int i = 0; i < 1000000; ++i)
    {
        if(arr[i]) continue;
        p.push_back(i);
        for(int j = i+i; j < 1000000; j+=i)
            arr[j] = 1;
    }
}

void e3mlElSa7()
{
    vector<int> ans;
    int powers[10] = {};
    int e;
    if(in == 1 || in == 0)
    {
        printf("%d\n",in);
        return;
    }
    for(int i = 0; i < p.size(); ++i)
    {
        if(in == 1) break;
        while(in%p[i] == 0)
        {
            ++powers[p[i]];
            in /= p[i];
        }
    }
    if(in != 1)
    {
        printf("%d\n",-1);
        return;
    }
    powers[8] = powers[2] / 3;
    powers[2] = powers[2] % 3;
    powers[9] = powers[3] / 2;
    powers[3] = powers[3] % 2;
    if(powers[2] && powers[3])
    {
        powers[6] = 1;
        --powers[2];
        --powers[3];
    }
    else
    {
        powers[4] = powers[2] / 2;
        powers[2] = powers[2] % 2;
        powers[9] += powers[3] / 2;
        powers[3] = powers[3] % 2;
    }
    for(int i = 2; i <= 9; i++)
    {
        if(powers[i] == 0) continue;
        while(powers[i]--) printf("%d",i);
    }
    puts("");
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	//timesaver;
	//*************************************************************************
	//Sieve();
	p.push_back(2);
	p.push_back(3);
	p.push_back(5);
	p.push_back(7);
	scanf("%d",&t);
	while(t--)
    {
        scanf("%d",&in);
        e3mlElSa7();
    }
    return 0;
}
//*.*.
