#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string x;
    cin >> x;
    if(x.length()&1)
    {
        cout << -1;
    }
    else
    {
        int r = 0, l = 0, u = 0, d = 0, a = 0;
        for(int i = 0; i < x.length(); i++)
        {
            if(x[i] == 'R')
            {
                if(l == 0)
                    r++;
                else
                    --l;
            }
            else if(x[i] == 'L')
            {
                if(r == 0)
                    l++;
                else
                    --r;
            }
            else if(x[i] == 'U')
            {
                if(d == 0)
                    u++;
                else
                    --d;
            }
            else
            {
                if(u == 0)
                    d++;
                else
                    --u;
            }
        }
        //cout << r << " " << l << " " << d << " " << u << " " << endl;
        if(r+l+d+u & 1)
            cout << (r+l+d+u+1)/2 << endl;
        else
            cout << (r+l+d+u)/2 << endl;
    }
    return 0;
}
