#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int x;
    cin >> x;
    string in , ch , l;
    deque<string> d;
    for(int i = 0; i < x; i++)
    {
        cin >> in;
        if(in == "pwd")
        {
            cout << "/";
            for(int i = 0; i < d.size(); i++)
                cout << d.at(i) << "/";
            cout << endl;
        }
        else
        {
            cin >> ch;
            if(ch[0] == '/')
            {
                d.clear();
                for(int i = 1; i < ch.length(); i++)
                {
                    l = "";
                    if(ch[i] == '.')
                    {
                        i+=2;
                        d.pop_back();
                    }
                    while(ch[i] != '/' && ch[i] != '.' && i < ch.length())
                    {
                        l += ch[i];
                        ++i;
                    }
                    //cout << l << " *x*x*x*" << endl;
                    if(l!="")
                        d.push_back(l);
                }
            }
            else
            {
                for(int i = 0; i < ch.length(); i++)
                {
                    l = "";
                    if(ch[i] == '.')
                    {
                        i+=2;
                        d.pop_back();
                    }
                    while(ch[i] != '/' && ch[i] != '.' && i < ch.length())
                    {
                        l += ch[i];
                        ++i;
                    }
                    //cout << l << " HE " << endl;
                    if(l!="")
                        d.push_back(l);
                }
            }
        }
    }
    return 0;
}
