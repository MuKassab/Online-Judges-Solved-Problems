#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cin >> a;
    long long int c = 0,b,ans = 0;
    for(int i = 0; i < a; i++)
    {
        cin >> b;
        ans += abs(b-c);
        c = b;
        //cout << c << " - " << ans << endl;
    }
    cout << ans << endl;
    return 0;
}
