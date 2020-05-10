#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x , mini = 0 , people = 0,c;
    cin >> x;
    int arr[x];
    vector<int> l;
    for(int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    while(i < x)
    {
        mini = 15 * arr[i];
        for(int j = 0; j < arr[i]; j++)
        {
            cin >> c;
            mini += 5*c;
        }
        ++i;
        l.push_back(mini);
    }
    mini = l.at(0);
    for(int j = 1; j < l.size(); j++)
    {
        mini = min(l.at(j),mini);
    }
    cout << mini;
    return 0;
}
