#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("te.txt","w",stdout);
    int t, bf, g, b, in;
    cin >> t;
    while(t--)
    {
        cin >> bf >> g >> b;
        priority_queue<int> gr, bl;
        for(int i = 0; i < g; i++)
        {
            cin >> in;
            gr.push(in);
        }
        for(int i = 0; i < b; i++)
        {
            cin >> in;
            bl.push(in);
        }
        while(!gr.empty() && !bl.empty())
        {
            int s = min((int)gr.size(),(int)bl.size());
            s = min(s,bf);
            int arr[s];
            for(int i = 0; i < s; i++)
            {
                arr[i] = gr.top() - bl.top();
                gr.pop();
                bl.pop();
            }
            for(int i = 0; i < s; i++)
            {
                if(arr[i] == 0) continue;
                if(arr[i] > 0) gr.push(arr[i]);
                else bl.push(-1 * arr[i]);
            }
        }
        if(gr.empty() && bl.empty())
            puts("green and blue died");
        else if(gr.empty())
        {
            puts("blue wins");
            while(!bl.empty())
                cout << bl.top() << endl, bl.pop();
        }
        else
        {
            puts("green wins");
            while(!gr.empty())
                cout << gr.top() << endl, gr.pop();
        }
        if(t) puts("");
    }
    return 0;
}
