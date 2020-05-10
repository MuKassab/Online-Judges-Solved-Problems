#include <iostream>

using namespace std;

int main()
{
    string a , b;
    int i, j = 0 , moves = 0;
    cin >> a >> b;
    for (i = 0; i < a.length()-1; i++)
    {
        for (j; j < b.length();)
        {
            if(a[i] == b[j])
            {
                ++moves;
                ++j;
                break;
            }
            ++j;
        }
    }
    cout << moves+1;
    return 0;
}
