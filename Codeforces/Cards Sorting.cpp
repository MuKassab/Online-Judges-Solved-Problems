#include <iostream>
#include <queue>
#include <map>

using namespace std;

int main()
{
    int n,a,ans = 0,mini;
    cin >> n;
    queue<int> q;
    map<int,int> m;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        q.push(a);
        if(m.count(a) == 0)
            m[a] = 1;
        else
            ++m[a];
    }
    while(!q.empty())
    {
        if(m.begin()->second == 0)
            m.erase(m.begin()->first);
        mini = m.begin()->first;
        if(q.front() == mini)
        {
            q.pop();
            --m.begin()->second;
        }
        else
        {
            q.push(q.front());
            q.pop();
        }
        ++ans;
    }
    cout << ans << endl;
    return 0;
}
