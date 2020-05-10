#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    int x , a , b;
    while(cin >> x)
    {
        bool qu = 1 , sta = 1 , pq = 1;
        queue<int> que;
        stack<int> st;
        priority_queue<int> pqu;
        for(int i = 0; i < x; i++)
        {
            cin >> a >> b;
            if(a == 1)
            {
                que.push(b);
                st.push(b);
                pqu.push(b);
            }
            else
            {
                if(que.front() == b && !que.empty())
                    que.pop();
                else
                    qu = 0;
                if(st.empty())
                    sta = 0;
                if(!st.empty())
                    if(st.top() == b)
                        st.pop();
                    else
                        sta = 0;
                if(pqu.top() == b && !pqu.empty())
                    pqu.pop();
                else
                    pq = 0;
            }
        }
        if(qu + sta + pq >= 2)
            cout << "not sure" << endl;
        else if (qu + sta + pq == 0)
            cout << "impossible" << endl;
        else if(qu)
            cout << "queue" << endl;
        else if(sta)
            cout << "stack" << endl;
        else if (pq)
            cout << "priority queue" << endl;
    }
    return 0;
}
