#include <iostream>

using namespace std;

int main()
{
    int n, freq[2000] = {0}, maxi = 0, a;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        ++freq[a];
        maxi = max(maxi,freq[a]);
    }
    if(n&1)
        n++;
    if(maxi > n/2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
