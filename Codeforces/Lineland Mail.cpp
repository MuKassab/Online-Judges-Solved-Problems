#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cin >> x;
    long long int arr[x] , mini , maxi;
    for(int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    mini = arr[0];
    maxi = arr[x-1];
    cout << abs(arr[0] - arr[1]) << " ";
    cout << abs(arr[0] - arr[x-1]) << " " << endl;
    for(int i = 1; i < x-1; i++)
    {
        cout << min(abs(arr[i] - arr[i-1]),abs(arr[i] - arr[i+1])) << " ";
        cout << max(abs(arr[i] - mini),abs(arr[i] - maxi)) << endl;
    }
    cout << abs(arr[x-1] - arr[x-2]) << " ";
    cout << max(abs(arr[x-1] - mini),abs(arr[x-1] - maxi)) << endl;
    return 0;
}
