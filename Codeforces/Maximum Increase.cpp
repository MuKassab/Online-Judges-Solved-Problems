#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int x , a , b , curMax = 1, allMax = 1;
    scanf("%d%d",&x,&b);
    //cout << x << " " << b << endl;
    for(int i = 0; i < x-1; i++)
    {
        scanf("%d",&a);
        if(a > b)
            ++curMax;
        else
            curMax = 1;
        b = a;
        allMax = max(allMax,curMax);
    }
    printf("%d\n",allMax);
    return 0;
}
