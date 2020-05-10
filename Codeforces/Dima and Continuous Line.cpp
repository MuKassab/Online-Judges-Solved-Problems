#include <iostream>

using namespace std;

int main()
{
    int p;
    cin >> p;
    int arr[p];
    for(int i = 0;i < p; i++)
        cin >> arr[i];
    for(int i = 2; i < p-1; i++)
    {
        for(int j = 0; j < p-1; j++)
        {
            if(i!=j)
            {
                if(arr[i+1] > arr[i])
                {
                    if(arr[j] > arr[i] && arr[j+1] < arr[i] && arr[i+1] > arr[j])
                        {cout << "yes" << endl; return 0;}
                    if(arr[j] < arr[i] && arr[j+1] > arr[i] && arr[i+1] > arr[j+1])
                        {cout << "yes" << endl; return 0;}
                    if(arr[j] > arr[i] && arr[j+1] > arr[i] && arr[i+1] > arr[j] && arr[i+1] < arr[j+1])
                        {cout << "yes" << endl; return 0;}
                    if(arr[j] > arr[i] && arr[j+1] > arr[i] && arr[i+1] > arr[j] && arr[i+1] < arr[j+1])
                        {cout << "yes" << endl; return 0;}
                }
                if(arr[i+1] < arr[i])
                {
                    if(arr[j] > arr[i] && arr[j+1] < arr[i] && arr[i+1] < arr[j+1])
                        {cout << "yes" << endl; return 0;}
                    if(arr[j] < arr[i] && arr[j+1] > arr[i] && arr[i+1] < arr[j])
                        {cout << "yes" << endl; return 0;}
                    if(arr[j] < arr[i] && arr[j+1] < arr[i] && arr[i+1] < arr[j] && arr[i+1] > arr[j+1])
                        {cout << "yes" << endl; return 0;}
                    if(arr[j] < arr[i] && arr[j+1] < arr[i] && arr[i+1] > arr[j] && arr[i+1] < arr[j+1])
                        {cout << "yes" << endl; return 0;}
                }
            }
        }
    }
    cout << "no" << endl;
    return 0;
}
