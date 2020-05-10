#include <iostream>
#include <set>
#include <cstdio>

using namespace std;

int main()
{
    int x;
    scanf("%d",&x);
    while(x!=0)
    {
        int t = 0;
        bool w = 0;
        string a;
        cin.ignore(1);
        getline(cin,a);
        int maxi = 0;
        for(int i = 0; i < a.length(); i++)
        {
            t = 0;
            set<char> s;
            int j;
            for(j = i; j < a.length(); j++)
            {
                if(s.count(a[j]) == 1)
                    ++t;
                else if(s.size() == x)
                {
                    break;
                }
                else
                    s.insert(a[j]);
            }
            int q = s.size();
            maxi = max(maxi,t+q);
            if(j == a.length())
                break;
        }
        cout << maxi << endl;
        cin >> x;
    }
    return 0;
}
