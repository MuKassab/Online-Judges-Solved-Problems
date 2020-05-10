#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int x , pass;
    cin >> x;
    while(x!=0)
    {
        stack<int> st;
        pass = 1;
        int arr[x];
        for(int i = 0; i < x; i++)
            cin >> arr[i];
        for(int i = 0; i < x; i++)
        {
            while(st.size() != 0 && st.top() == pass)
            {
                ++pass;
                st.pop();
            }
            if(arr[i] == pass)
                ++pass;
            else
                st.push(arr[i]);
        }
        int a = st.size();
        for(int i = 0; i < a; i++)
        {
            if(st.top() == pass)
            {
                st.pop();
                ++pass;
            }
            else
                break;
        }
        if(st.size() == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
        cin >> x;
    }
    return 0;
}
