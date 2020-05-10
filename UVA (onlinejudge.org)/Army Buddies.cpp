#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* prv;
    node* nxt;
};

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int sold, loss, l, r;
    scanf("%d %d",&sold,&loss);
    while(sold != 0 && loss != 0)
    {
        pair<int,int> arr[sold+2];
        for(int i = 1; i <= sold; i++)
        {
            arr[i].first = i - 1;
            arr[i].second = i + 1;
            if(i == sold)
                arr[i].second = 0;
        }
        while(loss--)
        {
            scanf("%d %d",&l, &r);
            arr[arr[l].first].second = arr[r].second;
            arr[arr[r].second].first = arr[l].first;
            if(arr[l].first == 0)
                printf("* ");
            else
                printf("%d ",arr[l].first);
            if(arr[r].second == 0)
                printf("*\n");
            else
                printf("%d\n",arr[r].second);
        }
        puts("-");
        scanf("%d %d",&sold,&loss);
    }
    return 0;
}
