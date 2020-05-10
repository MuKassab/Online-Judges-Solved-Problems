#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("o.txt","w",stdout);
    int t, n;
    cin >> t;
    map<char,int> m;
    string p, add;
    for(int i = 'A', k = 2; i < 'Z'; i+= 3, k++)
    {
        for(int j = i; j <= i+2; j++)
        {
            if(j+1 >= 'Z')
                break;
            if(j >= 'Q')
                m[(char)j+1] = k;
            else
                m[(char)j] = k;
        }
    }
    /*for(auto i = m.begin(); i != m.end(); i++)
        cout << i->first << " " << i -> second << endl;*/
    while(t--)
    {
        cin >> n;
        map<string,int> freq;
        while(n--)
        {
            cin >> p;
            add = "";
            for(int i = 0; i < p.length(); i++)
            {
                if(p[i] >= '0' && p[i] <= '9')
                    add += p[i];
                else if(p[i] >= 'A' && p[i] <= 'Z')
                    add += (m[p[i]] + '0');
                if(add.length() == 3)
                    add += '-';
            }
            //cout << add << endl;
            if(freq.count(add))
                ++freq[add];
            else
                freq[add] = 1;
        }
        bool dup = 0;
        for(auto i = freq.begin(); i != freq.end(); i++)
            if(i->second > 1)
            {
                cout << i->first << " " << i->second << endl;
                dup = 1;
            }
        if(!dup)
            cout << "No duplicates." << endl;
        if(t)
            cout << endl;
    }
    return 0;
}
