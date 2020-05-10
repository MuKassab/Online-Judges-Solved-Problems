#include <iostream>

using namespace std;

int main()
{
    int x , a , b;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
        cin >> arr[i];
    for (int i = 0; i < x; i++)
    {
        if (arr[i] != 1)
        {
            for (int j = 0; j < x; j++)
            {
                if (j != i && arr[j] < arr[i])
                {
                    a = arr[i] - arr[j];
                    for (int k = 0; k < x; k++)
                    {
                        if (k != i && k != j && arr[k] < arr[i])
                        {
                            if (arr[k] == a)
                            {
                                cout << i+1 << " " << j+1 << " " << k+1;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << -1;
    return 0;
}
