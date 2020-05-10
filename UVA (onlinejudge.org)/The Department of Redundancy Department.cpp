#include <iostream>
#include <map>
#include <queue>
#include <stdio.h>

using namespace std;

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    map<int,int> m;
    queue<int> q;
    int a;
    while(cin >> a)
    {
        if(m.count(a) == 1)
            ++m[a];
        else
        {
            q.push(a);
            m[a] = 1;
        }
    }
    while(!q.empty())
    {
        cout << q.front() << " " << m[q.front()] << endl;
        q.pop();
    }
    return 0;
}
