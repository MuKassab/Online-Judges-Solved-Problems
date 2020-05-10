#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n*n];
    for(int i = 0; i < n*n; i++)
        cin >> arr[i];
    int mini = min(arr[0],arr[n*n-1]);
    bool c = 0;
    int a = 1;
    if(mini == arr[0])
    {
        while(c == 0)
        {
            if(a*a == arr[0])
                c = 1;
            else
                ++a;
        }
        for(int i = 0; i < n; i++)
            cout << arr[i]/a << " ";
    }
    else
    {
        while(c == 0)
        {
            if(a*a == arr[n*n-1])
                c = 1;
            else
                ++a;
        }
        for(int i = n*n-n; i < n*n; i++)
            cout << arr[i]/a << " ";
    }
    return 0;
}
