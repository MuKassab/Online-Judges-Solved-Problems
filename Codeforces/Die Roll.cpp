#include <iostream>

using namespace std;

int main()
{
    int a ,b;
    cin >> a >> b;
    b = max(a,b);
    a = 6 - b + 1;
    if (a == 1)
        cout << 1 << "/" << 6;
    else if (a == 2)
        cout << 1 << "/" << 3;
    else if (a == 3)
        cout << 1 << "/" << 2;
    else if (a == 4)
        cout << 2 << "/" << 3;
    else if (a == 5)
        cout << 5 << "/" << 6;
    else if (a == 6)
        cout << 1 << "/" << 1;
    return 0;
}
