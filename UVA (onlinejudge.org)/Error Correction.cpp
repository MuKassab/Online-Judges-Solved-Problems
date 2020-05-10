#include <bits/stdc++.h>

using namespace std;

int n;
int rowSum, colSum;
int arr[105][105];
vector<int> crptCol, crptRows;

int check()
{
    for(int i = 1; i <= n; i++)
    {
        rowSum = 0;
        colSum = 0;
        for(int j = 1; j <= n; j++)
        {
            if(arr[i][j])
                ++rowSum;
            if(arr[j][i])
                ++colSum;
        }
        if(rowSum&1)
            crptRows.push_back(i);
        if(colSum&1)
            crptCol.push_back(i);
    }
    if(crptRows.empty() && crptCol.empty())
        return 1;
    else if(crptRows.size() == 1 && crptCol.size() == 1)
        return 0;
    else
        return -1;
}

void init()
{
    while(!crptCol.empty())
        crptCol.pop_back();
    while(!crptRows.empty())
        crptRows.pop_back();
}
int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    scanf("%d",&n);
    while(n != 0)
    {
        init();
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
                scanf("%d",&arr[i][j]);
        }
        int ch = check();
        if(ch == 1)
            puts("OK");
        else if(ch == -1)
            puts("Corrupt");
        else
        {
            if(arr[crptRows[0]][crptCol[0]])
                arr[crptRows[0]][crptCol[0]] = 0;
            else
                arr[crptRows[0]][crptCol[0]] = 1;
            init();
            ch = check();
            if(ch == 1)
                printf("Change bit (%d,%d)\n",crptRows[0],crptCol[0]);
            else
                puts("Corrupt");
        }
        scanf("%d",&n);
    }
    return 0;
}
