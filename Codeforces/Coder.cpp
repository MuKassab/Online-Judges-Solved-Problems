#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n%2 == 0)
        cout << (n/2)*n << endl;
    else
        cout << (n/2 + 1)*n - (n/2) << endl;
    for (int i = 0; i < n; i++)
    {
        if (i%2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (j%2 == 0)
                    cout << "C";
                else
                    cout << ".";
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j%2 == 1)
                    cout << "C";
                else
                    cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
