#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main()
{
    int x,t,e = 0;
    cin >> x;
    cin.ignore(2);
    string a;
    while(x--)
    {
        ++e;
        map<string,double> ma;
        getline(cin,a);
        t = 0;
        while(a != "" && a != "\n")
        {
            if(ma.count(a))
            {
                ++ma[a];
            }
            else
                ma.insert(make_pair(a,1));
            getline(cin,a);
            t++;
        }
        map<string,double>::iterator itr = ma.begin();
        for(itr; itr != ma.end(); itr++)
        {
            cout << itr->first << " ";
            cout << fixed << setprecision(4) << (itr->second/t)*100 << endl;
        }
        if(x != 0)
            cout << endl;
    }
    return 0;
}
