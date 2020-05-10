#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int x;
    cin >> x;
    string a;
    for(int i = 0; i < x; i++)
    {
        cin >> a;
        stack<char> st;
        bool q = 1;
        if(a[0] == '}' || a.length()%2)
        {
            cout << ":(" << endl;
            continue;
        }
        for(int j = 0; j < a.length(); j++)
        {
            if(st.empty() && a[j] == '}')
            {
                cout << ":(" << endl;
                q = 0;
                break;
            }
            else if(a[j] == '}' && st.top() == '{')
                st.pop();
            else
                st.push(a[j]);
        }
        if(q)
        {
            if(st.empty())
                cout << ":)" << endl;
            else
                cout << ":(" << endl;
        }
    }
    return 0;
}
