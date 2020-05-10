#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("te.txt","w",stdout);
    int n, a;
    while(cin >> n && n)
    {
        while(cin >> a && a)
        {
            stack<int> st;
            queue<int> le;
            le.push(a);
            for(int i = 1; i < n; i++)
            {
                cin >> a;
                le.push(a);
            }
            for(int i = 1; i <= n; i++)
            {
                st.push(i);
                while(!st.empty() && st.top() == le.front())
                {
                    st.pop();
                    le.pop();
                }
            }
            if(st.empty() && le.empty()) puts("Yes");
            else puts("No");
        }
        puts("");
    }
    return 0;
}
