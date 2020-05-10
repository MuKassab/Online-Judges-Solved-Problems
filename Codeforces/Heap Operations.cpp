#include <iostream>
#include <deque>
#include <vector>
#include <list>
#include <algorithm>
#include <cstdio>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<int> > v;

int main()
{
    int x , m;
    long long int a;
    string b;
    bool h = 0;
    scanf("%d",&x);
    //deque<long long int> v;
    vector<long long int>k;
    vector<string> l;
    for(int i = 0; i < x; i++)
    {
        cin >> b;
        if(i == 0 && b[0] == 'r')
        {
            l.push_back("insert");
            h = 1;
            l.push_back(b);
        }
        else if(i == 0 && b[0] == 'g')
        {
            scanf("%lld",&a);
            l.push_back("insert");
            k.push_back(a);
            k.push_back(a);
            l.push_back(b);
            v.push(a);
        }
        else
        {
            if(b[0] == 'i')
            {
                scanf("%lld",&a);
                v.push(a);
                l.push_back(b);
                k.push_back(a);
            }
            else if (b[0] == 'r')
            {
                //sort(v.begin(),v.end());
                if(v.size() != 0)
                {
                    l.push_back(b);
                    v.pop();
                }
                else
                {
                    l.push_back("insert");
                    k.push_back(0);
                    l.push_back(b);
                }
            }
            else if(b[0] == 'g')
            {
//                sort(v.begin(),v.end());
                cin >> a;
                if(v.size() != 0)
                {
                    m = v.size();
                    if(a > v.top())
                    {
                        for(int j = 0; j < m && a > v.top(); j++)
                        {
                            l.push_back("removeMin");
                            v.pop();
                        }
                        if(a != v.top())
                        {
                            l.push_back("insert");
                            k.push_back(a);
                            v.push(a);
                        }
                    }
                    else if(a < v.top())
                    {
                        l.push_back("insert");
                        k.push_back(a);
                        v.push(a);
                    }
                    l.push_back(b);
                    k.push_back(a);
                }
                else
                {
                    l.push_back("insert");
                    k.push_back(a);
                    l.push_back(b);
                    k.push_back(a);
                    v.push(a);
                }
            }
        }
    }
    cout << l.size() << endl;
    int s = 0;
    for(int i = 0; i < l.size(); i++)
    {
        if(i == 0 && h)
        {
            cout << l.at(0) << " 0";
            puts("");
        }
        else
        {
            if(l.at(i)[0] != 'r')
            {
                cout << l.at(i) << " ";
                cout << k.at(s);
                puts("");
                ++s;
            }
            else
            {
                cout << l.at(i);
                puts("");
            }
        }
    }
    return 0;
}
