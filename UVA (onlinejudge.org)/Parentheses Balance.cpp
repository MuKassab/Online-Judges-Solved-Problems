#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < arr[i].length()-1;j++)
        {
            if(arr[i][j] == '(')
            {
                if(arr[i][j+1] == ')')
                {
                    arr[i].erase(j,2);
                    if(j - 2 >= 0)
                        j -= 3;
                    else
                        j = -1;
                }
            }
            else if(arr[i][j] == '[')
            {
                if(arr[i][j+1] == ']')
                {
                    arr[i].erase(j,2);
                    if(j - 2 >= 0)
                        j -= 3;
                    else
                        j = -1;
                }
            }
            if(arr[i].length() == 0)
                break;
        }
        if(arr[i].length() == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
