#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e5 + 20;
int n, t, arr[N], le, ri, ans,x,answer;

int maximumBooks()
{
    ri = le = 0;
    x = t;
    //4 5
    //3 1 2 1
    while(ri < n)
    {
        //ans = 0;
        if(ri > le)
            le = ri;
        //cout << "Right : " << ri << " - Left Before : " << le;
        while(le < n)
        {
            if(x - arr[le] >= 0)
            {
                x -= arr[le];
                ++ans;
                ++le;
            }
            else
                break;
        }
        //qcout << " - Left After : " << le << endl;
        answer = max(answer,ans);
        if(ans > 0)
        {
            --ans;
            x += arr[ri];
        }
        ++ri;
    }
    return answer;
}

int main()
{
    scanf("%d%d",&n,&t);
    for(int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("%d",maximumBooks());
    return 0;
}
