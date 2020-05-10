#include <iostream>

using namespace std;

int main()
{
    int a , b , eat = 0;
    bool emp = 0;
    cin >> a >> b;
    char arr[a][b];
    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
        cin >> arr[i][j];
    for(int i = 0; i < a; i++)
    {
        emp = 1;
        for(int j = 0; j < b; j++)
        {
            if(arr[i][j] == 'S')
                emp = 0;
        }
        if(emp)
        {
            for(int j = 0; j < b; j++)
            {
                arr[i][j] = '*';
                ++eat;
            }
        }
    }
    for(int j = 0; j < b; j++)
    {
        emp = 1;
        for(int i = 0; i < a; i++)
        {
            if(arr[i][j] == 'S')
                emp = 0;
        }
        if(emp)
        {
            for(int i = 0; i < a; i++)
            {
                if(arr[i][j] != '*')
                    ++eat;
                arr[i][j] = '*';
            }
        }
    }
    cout << eat;
    return 0;
}
