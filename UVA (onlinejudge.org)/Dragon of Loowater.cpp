#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x , y , ex , p;
    cin >> x >> y;
    bool w;
    while(x!=0)
    {
        ex = 0;
        vector<int> heads,knight;
        for(int i = 0; i < x; i++)
        {
            cin >> p;
            heads.push_back(p);
        }
        for(int i = 0; i < y; i++)
        {
            cin >> p;
            knight.push_back(p);
        }
        if(x > y)
            cout << "Loowater is doomed!" << endl;
        else{
            sort(heads.begin(),heads.end());
            sort(knight.begin(),knight.end());
            for(int i = 0; 0 < heads.size(); i++)
            {
                w = 1;
                for(int j = 0; j < y; j++)
                {
                    if(knight[j] >= heads[0])
                    {
                        ex += knight[j];
                        knight[j] = -1;
                        heads.erase(heads.begin()+0);
                        break;
                    }
                    if(j == y-1)
                        w = 0;
                }
                if(!w)
                    break;
            }
            if(heads.size() == 0)
                cout << ex << endl;
            else
                cout << "Loowater is doomed!" << endl;
        }
        cin >> x >> y;
    }
    return 0;
}
