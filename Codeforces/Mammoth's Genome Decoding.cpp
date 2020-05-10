#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x,q = 0;
    cin >> x;
    string s;
    bool h = 1;;
    cin >> s;
    if(x%4 != 0)
    {
        cout << "===" << endl;
    }
    else
    {
        vector<char> a , g , c , t;
        a.assign(x/4,'A');
        g.assign(x/4,'G');
        c.assign(x/4,'C');
        t.assign(x/4,'T');
        for(int i = 0; i < s.length(); i++)
        {
            if(h){
            if(s[i] == 'A')
            {
                if(!a.empty())
                    a.erase(a.begin());
                else
                    h = 0;
            }
            else if(s[i] == 'G')
            {
                if(!g.empty())
                    g.erase(g.begin());
                else
                    h = 0;
            }
            else if(s[i] == 'C')
            {
                if(!c.empty())
                    c.erase(c.begin());
                else
                    h = 0;
            }
            else if(s[i] == 'T')
            {
                if(!t.empty())
                    t.erase(t.begin());
                else
                    h = 0;
            }
            else
                ++q;
            }else
                break;
        }
        if(h)
        {
            if(q != a.size()+g.size()+c.size()+t.size())
                cout << "===" << endl;
            else
            {
                for(int i = 0; i < s.length(); i++)
                {
                    if(s[i] != '?')
                        cout << s[i];
                    else
                    {
                        if(!a.empty())
                            {cout << "A"; a.erase(a.begin());}
                        else if(!g.empty())
                            {cout << "G"; g.erase(g.begin());}
                        else if(!c.empty())
                            {cout << "C"; c.erase(c.begin());}
                        else if(!t.empty())
                            {cout << "T"; t.erase(t.begin());}
                    }
                }
            }
        }
        else
            cout << "===" << endl;
    }
    return 0;
}
