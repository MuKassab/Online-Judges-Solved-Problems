#include<bits/stdc++.h>

using namespace std;

int ser[25], arr[25], answer[25], check[25], commonArea[11][25], sizes[11];
int t, b, m, c, to, curr, ans, currTowers, add, caseNum;


void checkCommonAreas()
{
    int freq[13] = {};
    add = 0;
    for(int i = 1; i <= b; i++)
        for(int j = 0; j < m; j++)
            for(int k = 0; k < sizes[j] && freq[j] == 0; k++)
                if(check[i] == commonArea[j][k])
                {
                    add += arr[j];
                    freq[j] = 1;
                    break;
                }
}


int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    while(cin >> t >> b && t && b)
    {
        ans = curr = 0;
        for(int i = 1; i <= t; i++)
            cin >> ser[i];
        cin >> m;
        for(int i = 0; i < m; i++)
        {
            cin >> sizes[i];
            for(int j = 0; j < sizes[i]; j++)
                cin >> commonArea[i][j];
            cin >> arr[i];
        }
        for(int i = 0; i < m; i++)
            for(int j = 0; j < sizes[i]; j++)
                ser[ commonArea[i][j] ] -= arr[i];
        int taken;
        for(int i = 1; i < pow(2,t); i++)
        {
            taken = 0;
            curr = 0;
            for(int j = 0; j < 21; j++)
                if(i & (1 << j))
                {
                    taken++;
                    check[taken] = j + 1;
                    curr += ser[j+1];
                }
            if(taken != b) continue;
            sort(check,check+b+1);
            checkCommonAreas();
            if(add + curr >= ans)
            {
                bool ch = 0;
                if(add + curr == ans)
                {
                    for(int i = 1; i <= b; i++)
                        if(check[i] < answer[i])
                        {
                            ch = 1;
                            break;
                        }
                }
                if((add + curr > ans) || ch)
                    for(int j = 1; j <= b; j++)
                        answer[j] = check[j];
                ans = add + curr;
            }
        }
        printf("Case Number  %d\n",++caseNum);
        printf("Number of Customers: %d\n",ans);
        printf("Locations recommended:");
        for(int i = 1; i <= b; i++)
            printf(" %d",answer[i]);
        printf("\n\n");
    }
    return 0;
}
