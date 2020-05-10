#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n,a,m;
    while(true)
    {
        scanf("%d",&n);
        if(n == 0) return 0;
        m = 0;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
            m = max(m,arr[i]);
        }
        for(int i = m; i >= 1; i--)
        {
            for(int j = 0; j < n; j++)
            {
                if(arr[j] >= i)
                    cout << "*";
                else
                    cout << ".";
            }
            cout << endl;
        }
    }

    return 0;
}
