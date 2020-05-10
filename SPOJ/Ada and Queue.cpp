#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, n;
    bool rev = 0;
    string x;
    cin >> q;
    list<int> dq;
    while(q--)
    {
        cin >> x;
        if(x == "toFront")
        {
            cin >> n;
            if(!rev)
                dq.push_front(n);
            else
                dq.push_back(n);
        }
        else if( x == "push_back")
        {
            cin >> n;
            if(!rev)
                dq.push_back(n);
            else
                dq.push_front(n);
        }
        else if(x == "front")
        {
           if(dq.empty())
                cout << "No job for Ada?" << endl;
           else
           {
               if(!rev)
               {
                   cout << dq.front() << endl;
                   dq.pop_front();
               }
               else
               {
                   cout << dq.back() << endl;
                   dq.pop_back();
               }
           }

        }
        else if(x == "back")
        {
            if(dq.empty())
                cout << "No job for Ada?" << endl;
            else
            {
                if(!rev)
                {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
                else
                {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
            }
        }
        else
            rev = !rev;
    }
    return 0;
}
