#include <iostream>

using namespace std;

int main()
{
    int x , amazing = 0 , checkP , checkM;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
        if (i > 0)
        {
            checkP = 0 , checkM = 0;
            for (int j = i-1; j >= 0; j--)
            {
                if (arr[i] > arr[j])
                    ++checkP;
                if (arr[i] < arr[j])
                    ++checkM;
            }
            if (checkP == i || checkM == i)
                ++amazing;
        }
    }
    cout << amazing;
    return 0;
}
