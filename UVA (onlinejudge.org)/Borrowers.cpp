#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x,title,author;
    vector< pair <string, string> > v;
    map<string , bool> m;
    getline(cin,x);
    while(x != "END")
    {
        title = x.substr(1,x.find_last_of('"') - 1);
        author = x.substr(x.find("by ") + 3,string::npos);
        v.push_back({author,title});
        m[title] = 0;
        getline(cin,x);
    }
    sort(v.begin(),v.end());
    getline(cin,x);
    while(x != "END")
    {
        if(x[0] == 'B')
        {
            title = x.substr(8,x.find_last_of('"') - x.find('"') - 1);
            m[title] = 1;
        }
        else if(x[0] == 'R')
        {
            title = x.substr(8,x.find_last_of('"') - x.find('"') - 1);
            m[title] = 0;
        }
        else
        {

        }
        getline(cin,x);
    }
    return 0;
}
