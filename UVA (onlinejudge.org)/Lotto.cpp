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

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	int n;
	bool st = 1;
	int arr[60];
	while(cin >> n && n)
    {
        if(!st) cout << endl;
        else st = !st;
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i = 0; i < n; i++)
            for(int j = i+1; j < n; j++)
                for(int k = j+1; k < n; k++)
                    for(int l = k+1; l < n; l++)
                        for(int m = l+1; m < n; m++)
                            for(int q = m+1; q < n; q++)
                                cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[l] << " " << arr[m] << " " << arr[q] << endl;
    }
    return 0;
}
