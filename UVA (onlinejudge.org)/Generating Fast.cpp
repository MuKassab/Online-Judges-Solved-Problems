#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    //freopen("t.txt","w",stdout);
    int x;
    cin >> x;
    string a;
    while(x--)
    {
        cin >> a;
        sort(a.begin(),a.end());
        do
        {
            cout << a << endl;
        }while(next_permutation(a.begin(),a.end()));
        cout << endl;
    }
    return 0;
}
