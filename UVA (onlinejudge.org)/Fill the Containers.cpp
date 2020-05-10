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

long long int n, m, arr[1020], low , high, mid, curr;
bool valid;

long long int minimalMaximalCapacity()
{
    low = 1, high = 1e13;
    while(low < high)
    {
        mid = (high + low) / 2;
        //cout << mid << endl;
        curr = mid;
        valid = 1;
        for(int i = 0, j = m-1; i < n; i++)
        {
            if(curr >= arr[i])
                curr -= arr[i];
            else
            {
                if(j && (mid >= arr[i])){
                    --j;
                    curr = mid - arr[i];
                }
                else{
                    valid = 0;
                    break;
                }
            }
            //cout << curr << endl;
        }
        if(valid) high = mid;
        else low = mid + 1;
        //cout << low << " " << mid << " " << high << endl;
    }
    return low;
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	while(cin >> n >> m)
    {
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        cout << minimalMaximalCapacity() << endl;
    }
    return 0;
}
