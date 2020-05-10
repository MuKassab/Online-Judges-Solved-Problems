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

int arr[200];

void Sieve()
{
    for(int i = 0; i < 150; i++)
        arr[i] = 1;
    arr[0] = arr[1] = 0;
    for(int i = 2; i <= 100; i++)
    {
        if(!arr[i]) continue;
        for(int j = i*2; j <= 100; j += i)
            arr[j] = 0;
    }
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	Sieve();
	string a;
	bool p = 0;
	for(int i = 1; i <= 50; i++)
    {
        if(arr[i])
        {
            cout << i << endl;
            fflush(stdout);
            cin >> a;
            if(a == "yes")
            {
                if(p)
                {
                    return cout << "composite" << endl, 0;
                }
                else
                {
                    p = 1;
                    if(i*i <= 100){
                    cout << i*i << endl;
                    fflush(stdout);
                    cin >> a;
                    if(a == "yes") return cout << "composite" << endl, 0;}
                }
            }
        }
    }
    cout << "prime" << endl;
    return 0;
}
