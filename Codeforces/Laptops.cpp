#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    cin >> x;
    vector < pair<int,int> > values;
    pair<int,int> a;
    for(int i = 0; i < x; i++)
    {
        cin >> a.first;
        cin >> a.second;
        values.push_back(a);
    }
    sort(values.begin(),values.end());
    for(int i = 0; i < x-1; i++)
    {
        if(values.at(i).second > values.at(i+1).second)
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
    return 0;
}
