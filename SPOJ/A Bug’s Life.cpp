#include <iostream>
#include <cstdio>
#include <map>
#include <vector>

using namespace std;

int testc, bugs, inter, fb, sb, caseNum;
vector<int> mates[2010];
int color[2010], curColor, newColor;
bool assT;

void coloring()
{
    for(int i = 0; i < 2010; i++)
    {
        color[i] = -1;
        while(!mates[i].empty())
            mates[i].pop_back();
    }
}

void dfsColoring(int b)
{
    if(color[b] == -1)
        color[b] = 0;
    curColor = color[b];
    newColor = 1 - curColor;
    for(int i = 0; i < mates[b].size(); i++)
    {
        if(color[mates[b][i]] == curColor)
        {
            assT = 0; break;
        }
        if(color[mates[b][i]] == -1)
            color[mates[b][i]] = newColor;
    }
}

int main()
{
    scanf("%d",&testc);
    while(testc--)
    {
        coloring();
        assT = 1;
        scanf("%d%d",&bugs,&inter);
        while(inter--)
        {
            scanf("%d%d",&fb,&sb);
            mates[fb].push_back(sb);
            mates[sb].push_back(fb);
        }
        for(int i = 1; i <= bugs; i++)
        {
            if(assT)
                dfsColoring(i);
        }
        if(assT)
            printf("Scenario #%d:\nNo suspicious bugs found!\n",++caseNum);
        else
            printf("Scenario #%d:\nSuspicious bugs found!\n",++caseNum);
    }
    return 0;
}
