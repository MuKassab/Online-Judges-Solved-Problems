#include <iostream>
#include <algorithm>



using namespace std;

int main()
{
    int a , sum = 0 , mini;
    cin >> a;
    int arr[a];
    for(int i = 0; i < a; i++)
        cin >> arr[i];
    sort(arr,arr+a);
    while(arr[a-1] > arr[0])
    {
        mini = arr[0];
        for(int i = 0; i < a; i++)
        {
            while(arr[i] > mini)
                arr[i] -= mini;
        }
        sort(arr,arr+a);
    }
    for(int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
