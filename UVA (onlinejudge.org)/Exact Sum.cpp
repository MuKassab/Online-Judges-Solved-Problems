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

int arr[10050];

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	int n, x, r, a , b;
	while(cin >> n)
    {
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> x;
        sort(arr,arr+n);
        for(int i = 0; i < n; i++)
        {
            r = x - arr[i];
            if(r < arr[i]) break;
            if(r != arr[i])
            {
                if(binary_search(arr,arr+n,r))
                {
                    a = arr[i];
                    b = r;
                }
            }
            else
            {
                int oc = upper_bound(arr,arr+n,r) - lower_bound(arr,arr+n,r);
                if(oc > 1)
                {
                    a = b = r;
                    break;
                }
            }
        }
        cout << "Peter should buy books whose prices are " << a << " and " << b << "." << endl << endl;
    }
    return 0;
}
