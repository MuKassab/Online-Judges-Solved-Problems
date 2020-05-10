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

int arr[] = {0,1,2,3,4,5,6,7,8};
vector< vector<int> > options;

bool checkState()
{
    int ltor[20] = {}, rtol[20] = {}, l, r;
    for(int i = 1; i <= 8; i++)
    {
        l = i - arr[i] + 8;
        if(ltor[l]) return false;
        r = i + arr[i];
        if(rtol[r]) return false;
        ltor[l] = 1;
        rtol[r] = 1;
    }
    return true;
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	do{
        if(!checkState()) continue;
        vector<int> v(arr+1,arr+9);
        options.push_back(v);
	}while(next_permutation(arr+1,arr+9));
	int in[8], curr, ans, s = options.size(), caseNum = 1;
	while(cin >> in[0])
    {
        for(int i = 1; i < 8; i++)
            cin >> in[i];
        ans = 9000;
        for(int i = 0; i < s; i++)
        {
            curr = 0;
            for(int j = 0; j < 8; j++)
            {
                for(int k = 0; k < 8; k++)
                {
                    if(in[j] == options[i][k])
                    {
                        if(k != j) ++curr;
                        break;
                    }
                }
            }
            ans = min(ans,curr);
        }
        printf("Case %d: %d\n",caseNum++,ans);
    }
    return 0;
}
