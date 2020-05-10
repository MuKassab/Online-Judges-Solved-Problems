#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int x,n;
    scanf("%d",&x);
    n = x%4;
    if(x == 0)
        puts("1");
    else if(n == 1)
        puts("8");
    else if(n == 2)
        puts("4");
    else if(n == 3)
        puts("2");
    else if(n == 0)
        puts("6");
    return 0;
}
