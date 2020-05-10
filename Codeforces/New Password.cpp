#include <iostream>

using namespace std;

int main()
{
    int start = 'a', n, k, endi;
    cin >> n >> k;
    endi = start - 1 + k;
    for(int i = 0; i < n; i++)
    {
        cout << char(start);
        ++start;
        if(start == endi + 1)
            start = 'a';
    }
    return 0;
}
