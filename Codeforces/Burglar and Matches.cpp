#include <iostream>
#include <map>

using namespace std;

int main()
{
    long int carry,c,a,b,matches = 0,s = 0;
    multimap<long int,long int> m;
    cin >> carry >> c;
    for(int i = 0; i < c; i++)
    {
        cin >> a >> b;
        m.insert(make_pair(b,a));
    }
    multimap<long int,long int>::iterator itr = m.end(), x = m.begin();
    itr--;
    x--;
    for(itr; (itr!= x || s != m.size())&& carry > 0; itr--)
    {
        if(carry >= itr -> second)
        {
            matches += itr->second * itr->first;
        }
        else
        {
            matches += carry * itr->first;
        }
        carry -= itr -> second;
        s++;
    }
    cout << matches;
    return 0;
}
