#include <iostream>
#include <vector>
#include <cstdio>
#include <stdio.h>
#include <bitset>

using namespace std;

const int N = 100;
int n, caseNum, a, stop;
vector<int> nums,check;
bitset<N> vis;
bool fal,tr;

void backTrack()
{
    int sum  = 0;
    for(int i = 0; i < check.size(); i++)
        sum += check[i];
    if(sum > nums[stop]) return;
    if(sum == nums[stop]) tr = 0;
    if(!tr) return;
    for(int i = 0; i < stop; i++)
    {
        if(vis[i]) continue;
        vis[i] = 1;
        check.push_back(nums[i]);
        backTrack();
        vis[i] = 0;
        check.pop_back();
    }
}

void emptyVector()
{
    while(!nums.empty())
        nums.pop_back();
    while(!check.empty())
        check.pop_back();
    for(int i = 0; i <= 40; i++)
        vis[i] = 0;
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    while(cin >> n)
    {
        tr = 1;
        fal = 0;
        emptyVector();
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&a);
            nums.push_back(a);
            if(i >= 1)
            {
                if(a <= nums[i-1])
                    fal = 1;
            }
        }
        printf("Case #%d:",++caseNum);
        for(int i = 0; i < n; i++)
            printf(" %d",nums[i]);
        puts("");
        if(fal)
            puts("This is not an A-sequence.");
        else
        {
            for(int i = 2; i < n; i++)
            {
                if(!tr) continue;
                stop = i;
                for(int i = 0; i < 40; i++)
                    vis[i] = 0;
                while(!check.empty())
                    check.pop_back();
                backTrack();
            }
            if(tr)
                puts("This is an A-sequence.");
            else
                puts("This is not an A-sequence.");
        }
    }
    return 0;
}
