#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int cand, voters, st;
string a,b;

int main()
{
    scanf("%d%d",&cand,&voters);
    const int N = 1e5 + 3000;
    while(cand != 0 && voters != 0)
    {
        map<string,int> nameToNumOne;
        vector<string> arr[N];
        st = 1;
        for(int i = 0; i < cand; i++)
        {
            cin >> a;
            nameToNumOne[a] = st;
            ++st;
        }
        for(int i = 0; i < voters; i++)
        {
            cin >> a >> b;
            if(nameToNumOne.count(b) == 0) {nameToNumOne[b] = st; ++st;}
            arr[nameToNumOne[b]].push_back(a);
        }
        for(int i = 1; i < N; i++)
        {
            for(int j = 0; j < (int)arr[i].size(); j++)
                cout << arr[i][j] << endl;
        }
        scanf("%d%d",&cand,&voters);
    }
    return 0;
}

/*bool customSort(pair<string,string> a,pair<string,string> b)
{
    if(nameToNumOne[a.second] == 0 && nameToNumOne[b.second] == 0)
        return nameToNumTwo[a.first] < nameToNumTwo[b.first];
    else if(nameToNumOne[a.second] == 0) return false;
    else if(nameToNumOne[b.second] == 0) return true;
    if(nameToNumOne[a.second] < nameToNumOne[b.second]) return true;
    if(nameToNumOne[a.second] == nameToNumOne[b.second])
        if(nameToNumTwo[a.first] < nameToNumTwo[b.first]) return true;
    return false;
} */
