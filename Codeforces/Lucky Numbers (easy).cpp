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

vector<long long int> luckyNums;
int n;

void nextInt(int leng)
{
    long long int s,f,currNum;
    int counter = 0;
    for(int i = 0; i < (1ll << 10); i++)
    {
        s = f = 0;
        currNum = 0;
        for(int j = 0; j < leng; j++)
        {
            if(i & (1 << j)) {++s; currNum *= 10; currNum += 7;}
            else {++f; currNum *= 10; currNum += 4;}
        }
        if(s == f && currNum >= n)
            luckyNums.pb(currNum);
    }
}

int main()
{
	//freopen("i.txt","r",stdin);
	//freopen("o.txt","w",stdout);
	//timesaver;
	//**************************************************************************
    int maxi = 4, x, l = 0, f, s, currNum, m;
    cin >> n;
    x = n;
    while(x)
    {
        x /= 10;
        ++l;
    }
    l = max(l, 2);
    while(true)
    {
        nextInt(l++);
        if(luckyNums.empty()) continue;
        sort(luckyNums.begin(),luckyNums.end());
        cout << luckyNums[0] << endl;
        return 0;
    }
    return 0;
}
