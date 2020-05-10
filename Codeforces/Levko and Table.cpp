#include <iostream>

using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(i ==  j)
                cout << b-(a-1) << " ";
            else
                cout << 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
