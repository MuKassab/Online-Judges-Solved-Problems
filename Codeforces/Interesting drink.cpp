#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int sh , da , a;
    cin >> sh;
    vector<int> v;
    for(int i = 0; i < sh; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cin >> da;
    for(int i = 0; i < da; i++)
    {
        cin >> a;
        cout << (upper_bound(v.begin(),v.end(),a)-v.begin())<< endl;
    }
    return 0;
}
