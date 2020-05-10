#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e6 + 20;
int arr[N];

void primes()
{
    fill(arr,arr+N,1);
    arr[0] = arr[1] = 0;
    for(int i = 2; i < N - 5; i++)
    {
        if(arr[i] == 1)
        {
            for(int j = i; j < N - 5; j += i)
                arr[j] = i;
        }
    }
}

int main()
{
    primes();
    int x, y = 4;
    scanf("%d",&x);
    while(true)
    {
        //cout << y << " " << x - y << " " << arr[x - y] << endl;
        while(arr[y] == y)
            ++y;
        if(arr[x - y] != x - y)
        {
            printf("%d %d\n",y,x-y);
            break;
        }
        ++y;
    }
    return 0;
}
