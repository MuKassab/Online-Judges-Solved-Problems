#include <iostream>
#include <vector>
#include <cstdio>
#include <set>
#include <algorithm>
#include <stdio.h>

using namespace std;

const int N = 15,V = 150;
int t,n,nums[N],started[V],took[N];
vector<int> ans;
set< vector<int>, greater< vector<int> > > all;

void backTracking(int curr = -1)
{
    int sum = 0;
    for(int i = 0; i < ans.size(); i++)
        sum += ans[i];
    /*cout << "Sum : " << sum << endl << "Nums : ";
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;*/
    if(sum > t || (ans.size() == 1 && started[ans[0]])) return;
    if(ans.size() == 1) started[ans[0]] = 1;
    if(sum == t)
    {
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        all.insert(ans);
        return;
    }
    for(int i = curr+1; i < n; i++)
    {
        if(took[i]) continue;
        ans.push_back(nums[i]);
        took[i] = 1;
        backTracking(i);
        ans.pop_back();
        took[i] = 0;
    }
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    scanf("%d%d",&t,&n);
    while(n!=0)
    {
        for(int i = 0; i < 120; i++)
            started[i] = 0;
        for(int i = 0; i < 15; i++)
            nums[i] = took[i] = 0;
        all.clear();
        for(int i = 0; i < n; i++)
            scanf("%d",nums+i);
        printf("Sums of %d:\n",t);
        backTracking();
        if(all.empty())
            puts("NONE");
        else
        {
            for(set< vector<int> >::iterator i = all.begin(); i != all.end(); i++)
            {
                printf("%d",(*i)[0]);
                for(int j = 1; j < (*i).size(); j++)
                    printf("+%d",(*i)[j]);
                puts("");
            }
        }
        scanf("%d%d",&t,&n);
    }
    return 0;
}
