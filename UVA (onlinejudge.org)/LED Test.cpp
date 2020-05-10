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
int n;
string arr[15];
vector<int> options[15];
string nums[10] = {"YYYYYYN","NYYNNNN","YYNYYNY",
                   "YYYYNNY","NYYNNYY","YNYYNYY",
                   "YNYYYYY","YYYNNNN","YYYYYYY",
                   "YYYYNYY"};

void createOptions()
{
    bool f;
    for(int i = 0; i < n; i++)
    {
        for(int j = 9; j >= 0; j--)
        {
            f = 1;
            for(int k = 0; k < 7; k++)
            {
                if(arr[i][k] == 'Y' && nums[j][k] == 'N'){
                    f = 0;
                    break;
                }
            }
            if(f) options[i].push_back(j);
        }
    }
}

bool validCountDown()
{
    bool v = 1;
    for(int i = 0; i < options[0].size(); i++)
    {
        int st = options[0][i];
        int burnedLed[8] = {};
        v = 1;
        for(int j = 0; j < n && v; j++)
        {
            if(find(options[j].begin(), options[j].end(), st) == options[j].end())
                break;
            for(int k = 0; k < 7; k++)
                if(arr[j][k] == 'N' && nums[st][k] == 'Y')
                    burnedLed[k] = 1;
            for(int k = 0; k < 7 && v; k++)
                if(arr[j][k] == 'Y' && burnedLed[k] == 1)
                {
                    v = 0;
                    break;
                }
            --st;
            if(j == n-1 && v) return true;
        }
    }
    return false;
}

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	//timesaver;
	//**************************************************************************
	while(cin >> n && n)
    {
        for(int i = 0; i < 12; i++)
            while(!options[i].empty()) options[i].pop_back();
        for(int i = 0;i < n; i++)
            cin >> arr[i];
        createOptions();
        if(validCountDown()) puts("MATCH");
        else puts("MISMATCH");

    }
    return 0;
}

//2
//NNYNNNY 9
//NYYYYYY 8
