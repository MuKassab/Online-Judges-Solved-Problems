#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x , neg , zero;
    cin >> x;
    int arr[x];
    for (int i =0; i < x; i++)
        cin >> arr[i];
    sort(arr, arr + x);
    if (arr[x-1] <= 0)
    {
        cout << "1" << " " << arr[0] << endl;
        cout << "2" << " " << arr[1] << " " << arr[2]<<endl;
        for (int i = 3; i < x; i++)
        {
            if (i == 3)
                cout << x-i << " " << arr[3];
            else
                cout << " " << arr[i];
        }
    }
    else
    {
        for (int i = 0; i < x; i++)
        {
            if (arr[i] < 0)
                 neg = i;
            else if (arr[i] == 0)
                 zero = i;
        }
        cout << "1 " << arr[0] << endl;
        cout << x-zero-1 << " ";
        for (int i = zero + 1; i < x; i++)
            cout << arr[i] << " ";
        cout << endl;
        cout << zero;
        for (int i = 1; i <= zero; i++)
        cout << " " << arr[i];
    }
    return 0;
}
