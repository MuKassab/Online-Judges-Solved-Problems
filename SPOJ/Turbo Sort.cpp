#include <iostream>
#include <set>
#include <cstdio>

using namespace std;

int arr[1000001];

int main()
{
    int x,a;
    cin >> x;
    set<int> s;
    for(int i = 0; i < x; i++)
    {
        cin >> a;
        s.insert(a);
        ++arr[a];
    }
    set<int>::iterator itr;
    for(itr = s.begin(); itr != s.end(); itr++)
    {
        if(arr[*itr] > 1)
            for(int i = 0; i < arr[*itr]; i++)
                cout << *itr << endl;
        else
            cout << *itr << endl;
    }
    return 0;
}
