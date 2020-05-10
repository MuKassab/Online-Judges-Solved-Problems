#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, st, ans;
    cin >> n >> st;
    ans = n;
    string a;
    bool ch;
    while(n--)
    {
        cin >> a;
        int arr[10] = {};
        for(int i = 0; i < a.length(); i++)
        {
            arr[a[i]-'0']++;
        }
        for(int i = 0; i <= st; i++)
        {
            if((arr[i] == 0 && i <= st))
            {
                --ans;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}
