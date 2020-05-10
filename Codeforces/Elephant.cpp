#include <iostream>

using namespace std;

int main()
{
    int x , maxi = 0,steps = 0;
    cin >> x;
    int arr[5] = {1,2,3,4,5};
    while(x>0)
    {
        maxi = 0;
        for(int i = 0; i <5; i++)
        {
            if(arr[i] > maxi && maxi <= x)
                maxi = arr[i];
        }
        x -= maxi;
        ++steps;
    }
    cout << steps;
    return 0;
}
