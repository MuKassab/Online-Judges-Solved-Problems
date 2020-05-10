#include <iostream>
#include <set>

using namespace std;

int main()
{
    long long int x;
    int a , maxi = 0 , b;
    cin >> x;
    x*=2;
    set<int> s;
    for(long long int i = 0; i < x; i++)
    {
        cin >> a;
        if(s.count(a) == 1)
        {
            b = s.size();
            maxi = max(maxi,b);
            s.erase(a);
        }
        else
            s.insert(a);
    }
    cout << maxi;
    return 0;
}
