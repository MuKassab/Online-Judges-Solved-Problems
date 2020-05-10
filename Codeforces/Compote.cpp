#include <iostream>

using namespace std;

int main()
{
    int a , b , c, x;
    cin >> a >> b >> c;
    x = min(min(a,b/2),c/4);
    cout << x * 7 << endl;
    return 0;
}
