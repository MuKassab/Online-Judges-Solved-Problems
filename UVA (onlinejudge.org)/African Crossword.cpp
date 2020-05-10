#include <iostream>

using namespace std;

int main()
{
    int x , y;
    cin >> x >> y;
    char xw;
    bool ch;
    string arr[x];
    for(int i = 0; i < x; i++)
        cin >> arr[i];
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            xw = arr[i][j];
            cout << xw << endl;
            ch = 0;
            for(int k = i+1; k < x; k++)
            {
                if(i != k && xw != '-')
                    if(xw == arr[k][j])
                        {arr[k][j] = '-'; ch = 1;}
            }
            for(int l = 0; l < y; l++)
            {
                if(j != l && xw != '-')
                    if(xw == arr[i][l])
                        {arr[i][l] = '-'; ch = 1;}
            }
            if(ch)
                arr[i][j] = '-';
        }
        cout << arr[i] << endl;
    }
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
            if(arr[i][j] != '-')
                cout << arr[i][j];
    }
    return 0;
}
