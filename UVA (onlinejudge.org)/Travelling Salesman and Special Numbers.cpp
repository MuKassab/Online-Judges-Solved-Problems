#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {-4,-3,-9,-7,-6,-2,-45,-23,-98};
    sort(arr,arr+9);
    for(int i = 8; i >= 0; i++)
    {
        int k = sqrt(arr[i]);
        if(k*k != arr[i])
        {
            cout << arr[i] << endl;
            return 0;
        }
    }
    return 0;
}
