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

long int s, d;

bool checkFiveMonths(int x)
{
    long int q = 0;
    for(int i = 0; i < 8; i++)
    {
        q = 0;
        for(int j = i; j < i + 5; j++)
        {
            if(x & (1 << j)) q += s;
            else q -= d;
        }
        if(q >= 0) return false;
    }
    return true;
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	while(cin >> s >> d)
    {
        long int currSum, ans = -1, fiveMonth;
        for(int i = 1; i <= (1 << 12); i++)
        {
            currSum = 0;
            for(int j = 0; j < 12; j++)
            {
                if(i & (1l << j)) currSum += s;
                else currSum -= d;
            }
            if(currSum >= 0 && checkFiveMonths(i)){
                    ans = max(ans, currSum);
                    //cout << ans << " " << currSum << " " << i <<  endl;
            }
        }
        if(ans >= 0) cout << ans << endl;
        else cout << "Deficit" << endl;
    }
    return 0;
}
