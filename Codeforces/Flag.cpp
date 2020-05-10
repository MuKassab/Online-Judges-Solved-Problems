#include <iostream>

using namespace std;

int main()
{
    int a , b , c = 0 , d;
    cin >> a >> b;
    string arr[a];
    for (int i = 0; i < a; i++)
        cin >> arr[i];
    for (int i = 0; i < a-1; i++)
    {
        c = 0;
        for (int j = 1; j < b; j++)
        {
            if (arr[i][0] == arr[i][j])
                ++c;
        }
        if (arr[i][0] == arr[i+1][0] || (c != b-1 && b != 1))
        {
            cout << "NO";
            return 0;
        }
    }
    c = 0;
    for (int i = 1; i < b; i++)
    {
        if (arr[a-1][0] == arr[a-1][i])
            ++c;
    }
    if (c != b-1 && b != 1)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}
