#include <iostream>
#include <map>
#include <cstdio>
#include <queue>
#include <list>

using namespace std;

int main()
{
    //freopen("o.txt","w",stdout);
    //freopen("i.txt","r",stdin);
    int t=0/*cases*/,a/*teams*/,d/*memberID*/,b/*add*/,cas = 1;
    scanf("%d",&t);
    while(t != 0)
    {
        map<int,int> m;
        queue<int> total,each[1001];
        list<int> l;
        int c = 1;
        while(t--)
        {
            scanf("%d",&a);
            while(a--)
            {
                scanf("%d",&d);
                m.insert(make_pair(d,c));
            }
            c++;
        }
        string s;
        printf("Scenario #%d\n",cas);
        cin >> s;
        while(s != "STOP")
        {
            int ch;
            if(s == "ENQUEUE")
            {
                scanf("%d",&b);
                int p = m[b];
                bool ins = 0;
                if(each[p].empty())
                {
                    total.push(p);
                }
                each[p].push(b);/*
                list<int>::iterator i = l.begin();
                for(i; i != l.end(); i++)
                {
                    if(m[*i] == p)
                    {
                        ++i;
                        while(i != l.end() && m[*i] == p)
                            ++i;
                        ins = 1;
                        l.insert(i,b);
                        break;
                    }
                }
                if(!ins)
                    l.push_back(b);*/
            }
            else
            {
                printf("%d\n",each[total.front()].front());
                each[total.front()].pop();
                if(each[total.front()].empty())
                    total.pop();/*
                printf("%d\n",l.front());
                l.pop_front();*/
            }
            cin >> s;
        }
        ++cas;
        puts("");
        scanf("%d",&t);
    }
    return 0;
}


