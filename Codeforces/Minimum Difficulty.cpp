#include <iostream>

using namespace std;

int main()
{
    int x , mini = 1000, maxi = 0;
    cin >> x;
    int arr[x];
    for(int i = 0; i < x; i++)
        cin >> arr[i];
    for(int i = 1; i < x-1; i++)
    {
        for(int j = 1; j < x-1; j++)
        {
            if (j==1)
                maxi = 0;
            if(j!=i)
            {
                maxi = max(maxi,arr[j+1]-arr[j]);
            }
            else
                maxi = max(maxi,arr[j+1]-arr[j-1]);
        }
        mini = min(mini,maxi);
    }
    cout << mini;
    return 0;
}
