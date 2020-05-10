#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int l = a.length(),arr[l] ={},soFar = 0,q,s,e;
    for(int i = 1; i < l; i++)
    {
        if(a[i] == a[i-1])
        {
            ++soFar;
            arr[i] = soFar;
        }
        else
            arr[i] = soFar;
    }
    cin >> q;
    while(q--)
    {
        cin >> s >> e;
        cout << arr[e-1] - arr[s-1] << endl;
    }
    return 0;
}
