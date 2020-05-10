#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int n, caseNum = 1;
vector<int> curr;
vector< vector<int> > ans;
bool primes[] = {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0};
bool nums[] = {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

void backTrack(int nxtCircle = 2)
{
    if(nxtCircle >= 3 && !primes[curr[nxtCircle - 2] + curr[nxtCircle - 3]])
        return;
    if(nxtCircle == n+1)
    {
        if(curr.size() == n && primes[curr[n-1] + 1])
            ans.push_back(curr);
        return;
    }
    for(int i = 2; i <= n; i++)
    {
        if(nums[i]) continue;
        nums[i] = 1;
        curr.push_back(i);
        backTrack(nxtCircle + 1);
        nums[i] = 0;
        curr.pop_back();
    }
}

void emptyVectors()
{
    while(!curr.empty())
        curr.pop_back();
    while(!ans.empty())
        ans.pop_back();
    for(int i = 2; i <= 16; i++)
        nums[i] = 0;
    curr.push_back(1);
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    while(cin >> n)
    {
        emptyVectors();
        backTrack();
        if(caseNum > 1)
        puts("");
        printf("Case %d:\n",caseNum++);

        for(int i = 0; i < ans.size(); i++)
        {
            for(int j = 0; j < n; j++)
                {printf("%d",ans[i][j]);
            if(j != n-1)
                cout << " ";}
            puts("");
        }
    }
    return 0;
}
