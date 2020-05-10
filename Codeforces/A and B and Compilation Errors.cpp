#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], a1[n-1], a2[n-2];
    for(int i = 0;i < n; i++)
        cin >> a[i];
    for(int i = 0;i < n-1; i++)
        cin >> a1[i];
    for(int i = 0;i < n-2; i++)
        cin >> a2[i];
    sort(a,a+n);
    sort(a1,a1+n-1);
    sort(a2,a2+n-2);
    for(int i = 0; i < n; i++)
    {
        if(i == n-2 && a[i] == a1[i])
        {
            cout << a[n-1] << endl;
            break;
        }
        else if(a[i] != a1[i])
        {
            cout << a[i] << endl;
            break;
        }
    }
    for(int i = 0; i < n-1; i++)
    {
        if(i == n-3 && a1[i] == a2[i])
        {
            cout << a1[n-2] << endl;
            break;
        }
        else if(a1[i] != a2[i])
        {
            cout << a1[i] << endl;
            break;
        }
    }
    return 0;
}
