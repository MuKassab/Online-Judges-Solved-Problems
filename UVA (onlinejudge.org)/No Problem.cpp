#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int s,caseNum = 1;
    scanf("%d",&s);
    while(s >= 0)
    {
        int created[12], wanted[12];
        for(int i = 0; i < 12; i++)
            scanf("%d",&created[i]);
        for(int i = 0; i < 12; i++)
            scanf("%d",&wanted[i]);
        printf("Case %d:\n",caseNum++);
        for(int i = 0; i < 12; i++)
        {
            if(s < wanted[i])
                puts("No problem. :(");
            else
            {
                puts("No problem! :D");
                s -= wanted[i];
            }
            s += created[i];
        }
        scanf("%d",&s);
    }
    return 0;
}
