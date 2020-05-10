#include <iostream>

using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;
    bool c = 0;
    char x;
    for(int i = 0; i < n*m; i++)
    {
        cin >> x;
        if(x == 'C' || x == 'Y' || x == 'M')
            c = 1;
    }
    if(c)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
    return 0;
}
