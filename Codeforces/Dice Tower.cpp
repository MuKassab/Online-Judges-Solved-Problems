#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, top, a, b,bot,q,w;
    cin >> n >> top;
    bot = 7-top;
    bool ans = 1;
    vector < pair<int,int> > v;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    for(int i = 1; i < v.size(); i++)
    {
        if(bot != v[i].first && bot != v[i].second &&  bot != 7 - v[i].first && bot != 7 - v[i].second)
        {
            q = 7 - v[i].first;
            w = 7 - v[i].second;
            for(int j = 1; j < 7; j++)
            {
                if(j != v[i].first && j != v[i].second && j != q && j != w)
                {
                    if(j != bot)
                        top = j;
                    else
                        top = 7 - j;
                    break;
                }
            }
        }
        else
        {
            ans = 0;
            break;
        }
        bot = 7 - top;
        //cout << top << " - " << bot << endl;
    }
    if(ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
