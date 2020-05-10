#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    //freopen("t.txt","w",stdout);
    string a;
    cin >> a;
    while(a != "#")
    {
        if(next_permutation(a.begin(),a.end()))
            cout << a << endl;
        else
            cout << "No Successor" << endl;
        cin >> a;
    }
    return 0;
}
