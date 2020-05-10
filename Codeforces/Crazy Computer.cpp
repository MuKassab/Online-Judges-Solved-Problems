#include <iostream>

using namespace std;

int main()
{
    long long int a , b , words = 1;
    cin >> a >> b;
    long long int arr[a];
    for (int i = 0; i < a; i++)
        cin >> arr[i];
    for (int i = 0; i < a-1; i++)
    {
        if(arr[i+1]-arr[i] <= b)
            ++words;
        else
            words = 1;
    }
    cout << words;
    return 0;
}
