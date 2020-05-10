#include <iostream>

using namespace std;

int main()
{
    char arr[6][6];
    for(int i = 0; i < 36; i++)
        arr[i/6][i%6] = '*';
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
