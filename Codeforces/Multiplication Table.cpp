#include <iostream>

using namespace std;

int main()
{
    int n, x, ans = 0;
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
    {
        if(x%i == 0 && (i * (x/i)) == x && x/i  <= n)
        {
            //cout << i << " - " << x / i << " - " << i * (x/i) << endl;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
