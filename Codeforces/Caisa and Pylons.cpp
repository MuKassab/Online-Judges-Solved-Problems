#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    int curr = 0, pay = 0 , n , h,energy = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&h);
        energy += (curr-h);
        if(energy < 0)
        {
            pay += abs(energy);
            energy = 0;

        }
        curr = h;
    }
    printf("%d",pay);
    return 0;
}
