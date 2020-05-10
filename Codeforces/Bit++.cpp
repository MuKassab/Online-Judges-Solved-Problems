#include <iostream>

using namespace std;

int main()
{
    int operations , x = 0;
    cin >> operations;
    string ops[operations];
    for (int i = 0; i < operations; i++)
    {
        cin >> ops[i];
        for (int j = 0; j < 3; j++)
        {
            if (ops[i][j] == '+')
            {
                ++x;
                j = 4;
                break;
            }
            if (ops[i][j] == '-')
            {
                --x;
                j = 4;
            }
        }
    }
    cout << x;
    return 0;
}
