#include <iostream>

using namespace std;

int main()
{
    int n , k;
    cin >> n >> k;
    int arr[2*n+1];
    for(int i = 0; i < 2*n+1; i++)
        cin >> arr[i];
    cout << arr[0] << " ";
    for(int i = 1; i < 2*n; i++)
    {
        if(k != 0 && i&1)
        {
            if(arr[i]-1 > arr[i-1] && arr[i]-1 > arr[i+1])
            {
                --arr[i];

                --k;
                cout << arr[i] << " ";
            }
            else
                cout << arr[i] << " ";
        }
        else
            cout << arr[i] << " ";
    }
    cout << arr[2*n];
    return 0;
}
