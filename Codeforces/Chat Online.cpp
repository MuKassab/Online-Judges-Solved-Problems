#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int zT, xT, l, r, a, b, ans = 0;
    scanf("%d%d%d%d",&zT,&xT,&l,&r);
    int z[1050] = {}, x[2000] = {};
    while(zT--)
    {
        scanf("%d%d",&a,&b);
        z[a] = 1;
        z[b+1] = -1;
    }
    while(xT--)
    {
        scanf("%d%d",&a,&b);
        x[a] = 1;
        x[b+1] = -1;
    }
    for(int i = 1; i < 1050; i++)
    {
        z[i] += z[i-1];
        x[i] += x[i-1];
    }
    for(int i = l; i <= r; i++)
    {
        for(int j = 0; j < 1050; j++)
        {
            //if(j-i >= 0)
            //cout << x[j-l] << " * ";
            //cout << z[j] << " * " << j - l << " * " << endl;
            if(j-i >= 0 && z[j] == x[j-i] && z[j] == 1)
            {
                ++ans;
                break;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
