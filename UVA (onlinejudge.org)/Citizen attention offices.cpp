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

int city[6][6], ans[6], minDistSoFar;
int disArray[6][6];

int calcDistance()
{
    int d = 0;
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            d += disArray[i][j];
    return d;
}

int checkDistance(int a, int b, int c, int d, int e)
{
    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++)
            disArray[i][j] = 0;
    int mini;
    pair<int,int> off[5], curr;
    off[0] = {a/5,a%5};
    off[1] = {b/5,b%5};
    off[2] = {c/5,c%5};
    off[3] = {d/5,d%5};
    off[4] = {e/5,e%5};
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(!city[i][j]) continue;
            mini = 1e9;
            for(int k = 0; k < 5; k++)
                mini = min(mini, abs(off[k].first - i) + abs(off[k].second - j));
            disArray[i][j] = mini*city[i][j];
        }
    }
    return calcDistance();
}



int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	int t, n, r, c, p;
	cin >> t;
	while(t--)
    {
        cin >> n;
        for(int i = 0; i < 6; i++)
            for(int j = 0; j < 6; j++)
                city[i][j] = 0;
        while(n--)
        {
            cin >> r >> c >> p;
            city[r][c] = p;
        }
        /*for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
                cout << city[i][j] << " ";
            cout << endl;
        }*/
        minDistSoFar = 1e9;
        for(int i = 0; i < 25; i++)
            for(int j = i+1; j < 25; j++)
                for(int k = j+1; k < 25; k++)
                    for(int l = k+1; l < 25; l++)
                        for(int m = l+1; m < 25; m++)
                        {
                            int a = checkDistance(i,j,k,l,m);
                            if(a < minDistSoFar)
                            {
                                minDistSoFar = a;
                                ans[0] = i;
                                ans[1] = j;
                                ans[2] = k;
                                ans[3] = l;
                                ans[4] = m;
                            }
                        }
        //cout << minDistSoFar << endl << "***************" << endl;
        //cout << checkDistance(ans[0], ans[1], ans[2], ans[3], ans[4]) << endl;
        cout << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << " " << ans[4] << endl;
    }
    return 0;
}
