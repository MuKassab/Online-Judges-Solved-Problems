#include <iostream>

using namespace std;

int main()
{
    int n,ans = 1;
    string a,b;
    cin >> n >> b;
    for(int i = 1; i < n; i++)
    {
        cin >> a;
        if(a == b)
            continue;
        b = a;
        ++ans;
    }
    cout << ans << endl;
    return 0;
}
