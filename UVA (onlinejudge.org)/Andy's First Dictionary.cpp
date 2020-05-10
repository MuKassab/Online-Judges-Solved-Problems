#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    //ofstream h;
    //h.open("t.txt");
    string x , b;
    freopen("o.txt","w",stdout);
    int l;
    set<string> a;
    vector<string> v;
    while(cin >> x)
    {
        cout << x << endl;
        for(int j = 0; j < x.length(); j++)
        {
            x[j] = tolower(x[j]);
            if((int)x[j] < 97 || (int)x[j] > 122)
            {
                b = x.substr(0,j);
                x.erase(0,j+1);
                if(b != " " && b != "")
                    v.push_back(b);
                j = -1;
            }
        }
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++)
    {
        if(a.count(v.at(i)) == 0 && v.at(i) != "\n" && v.at(i) != "" && v.at(i) != " ")
            //cout << v.at(i) << endl;
        a.insert(v.at(i));
    }
    return 0;
}
