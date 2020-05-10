#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n] , a , b , c , d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> a >> b;
    c = max(a,b);
    a = min(a,b);
    for (int i = a-1; i < c-1; i++)
        d1 += arr[i];
    for (int i = 0; i < a-1; i++)
        d2 += arr[i];
    for (int i = c-1; i < n; i++)
        d2 += arr[i];
    cout << min(d1,d2);
    return 0;
}
