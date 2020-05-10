#include <iostream>

using namespace std;

int main()
{
    int l, love = 0;
    cin >> l;
    string arr[l];
    for(int i = 0; i < l; i++)
        cin >> arr[i];
    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < l; j++)
        {
            if(arr[i][j] != 'C')
                continue;
            for(int k = j+1; k < l; k++)
                if(arr[i][k] == 'C')
                    ++love;
            for(int m = i+1; m < l; m++)
                if(arr[i][j] == 'C' && arr[m][j] == 'C')
                    ++love;
        }
    }
    cout << love << endl;
    return 0;
}
