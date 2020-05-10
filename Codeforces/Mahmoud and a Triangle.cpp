#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int arr[x];
    for(int i = 0; i < x; i++)
        cin >> arr[i];
    sort(arr,arr+x);
    for(int i = 0; i < x-2; i++)
    {
        if(arr[i] + arr[i+1] > arr[i+2])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
