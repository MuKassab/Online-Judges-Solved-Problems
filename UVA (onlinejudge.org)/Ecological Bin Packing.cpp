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

bool customSort(pair<int,string> a, pair<int,string> b)
{
    if(a.first != b.first) return a < b;
    return a.second < b.second;
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	int bo, go, co, bs, gs, cs, bt, gt, ct;
	while(cin >> bo >> go >> co >> bs >> gs >> cs >> bt >> gt >> ct)
    {
        int t = bo + bs+ bt+ go + gs + gt+ co + cs+ ct;
        pair<int, string> arr[6];
        arr[0] = {t - bo - gs - ct, "BGC"}; //BGC
        arr[1] = {t - bo - gt - cs, "BCG"}; //BCG
        arr[2] = {t - bs - go - ct, "GBC"}; //GBC
        arr[3] = {t - bt - go - cs, "GCB"}; //GCB
        arr[4] = {t - bs - gt - co, "CBG"}; //CBG
        arr[5] = {t - bt - gs - co, "CGB"}; //CGB
        sort(arr, arr+6,customSort);
        cout << arr[0].second << " " << arr[0].first << endl;
    }
    return 0;
}
