#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int n, peaks;
    scanf("%d",&n);
    while(n != 0)
    {
        peaks = 0;
        int arr[n+2];
        for(int i = 1; i <= n; i++)
            scanf("%d",&arr[i]);
        arr[0] = arr[n];
        arr[n+1] = arr[1];
        for(int i = 1; i <= n; i++)
        {
            //cout << i << " - " << arr[i-1] << " - " << arr[i] << " - " << arr[i+1] << endl;
            if((arr[i] > arr[i-1] && arr[i] > arr[i+1]) || (arr[i] < arr[i-1] && arr[i] < arr[i+1]))
            {
                ++peaks;
                //cout << i << " - " << arr[i-1] << " - " << arr[i] << " - " << arr[i+1] << endl;
            }
        }
        printf("%d\n",peaks);
        scanf("%d",&n);
    }
    return 0;
}
