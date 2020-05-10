#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> st;
    string a;
    cin >> a;
    for(int i = 0; i < a.length(); i++)
    {
        if(!st.empty())
        {
            if(st.top() == a[i])
                st.pop();
            else
                st.push(a[i]);
        }
        else
            st.push(a[i]);
    }
    if(st.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
