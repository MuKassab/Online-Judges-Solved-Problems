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
	//timesaver;
	//**************************************************************************
    int n, perm, ind;
    set<int> w;
    for(int i = 0; i <= 20; i++)
    {
        w.insert(i);
        w.insert(2*i);
        w.insert(3*i);
    }
    vector<int> opt;
    for(auto x : w)
        opt.push_back(x);
    opt.push_back(50);
    ind = opt.size();
    while(cin >> n && n > 0)
    {
        set< vector<int> > s;
        perm = 0;
        for(int i = 0; i < ind; i++)
            for(int j = 0; j < ind; j++)
                for(int k = 0; k < ind; k++)
                {
                    if(opt[i]+opt[j]+opt[k] == n)
                    {
                        ++perm;
                        vector<int> v;
                        v.push_back(opt[i]);
                        v.push_back(opt[j]);
                        v.push_back(opt[k]);
                        sort(v.begin(),v.end());
                        //cout << v[0] << " " << v[1] << " " << v[2] << " X " << v.size() << " Y " << perm << endl;
                        s.insert(v);
                    }
                }
        if(perm == 0)
            printf("THE SCORE OF %d CANNOT BE MADE WITH THREE DARTS.\n", n);
        else
        {
            printf("NUMBER OF COMBINATIONS THAT SCORES %d IS %d.\n",n,(int)s.size());
            printf("NUMBER OF PERMUTATIONS THAT SCORES %d IS %d.\n",n,perm);
        }
        puts("**********************************************************************");
    }
    puts("END OF OUTPUT");
    return 0;
}
