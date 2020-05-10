#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int a , b,c , ex;
    string x;
    scanf("%d%d",&a,&b);
    vector< pair<string,int> > v;
    for(int i = 0; i < a; i++)
    {
        cin >> x;
        scanf("%d",&c);
        v.push_back(make_pair(x,c));
    }
    for(int i = 0; i < b; i++)
    {
        ex = 0;
        cin >> x;
        while(x!=".")
        {
            for(int j = 0; j < a; j++)
            {
                if(x == v.at(j).first)
                {
                    ex += v.at(j).second;
                    break;
                }
            }
            cin >> x;
        }
        cout << ex << endl;
    }
    return 0;
}
