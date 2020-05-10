#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int x;
    cin >> x;
    char a,b,c;
    string z;
    int cas = 1;
    bool d;
    while(x--)
    {
        cin >> z;
        stack<char> s;
        d = 1;
        for(int i = z.length()-1; i >= 0; i--)
        {
            s.push(z[i]);
            while(s.size() >= 3 && d && s.top() == '1')
            {
                d = 0;
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                c = s.top();
                s.pop();
                if(a == '1' && b == '0' && c == '0')
                    d = 1;
                else
                {
                    s.push(c);
                    s.push(b);
                    s.push(a);
                }
                if(!d)
                    break;
            }
        }
        if(s.empty())
            cout << "Case " << cas << ": yes" << endl;
        else
            cout << "Case " << cas << ": no" << endl;
        ++cas;
    }
    return 0;
}
