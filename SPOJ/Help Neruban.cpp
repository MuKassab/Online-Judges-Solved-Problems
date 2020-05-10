#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <stdio.h>
#include <algorithm>
#include <cstdio>

using namespace std;

bool custom(pair< pair<string,int> , pair<int,int> > a, pair< pair<string,int> , pair<int,int> > b)
{
    if(a.first.second > b.first.second)
        return true;
    else if(a.first.second == b.first.second)
    {
        if(a.second.first > b.second.first)
            return true;
        else if(a.second.first == b.second.first)
        {
            if(a.second.second < b.second.second)
                return true;
            else if(a.second.second >= b.second.second)
                return false;
        }
    }
    else
        return false;
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int h;
    scanf("%d",&h);
    int x = h;
    vector< pair< pair<string,int> , pair<int,int> > > v;
    char str[15];
    int acc , vel, stu;
    while(h--)
    {
        scanf("%s %d %d %d", str, &acc, &vel, &stu);
        v.push_back(make_pair(make_pair(str,acc),make_pair(vel,stu)));
    }
    sort(v.begin(),v.end(),custom);
    for(int i = 0; i < x; i++)
        cout << v.at(i).first.first << endl;
    return 0;
}
