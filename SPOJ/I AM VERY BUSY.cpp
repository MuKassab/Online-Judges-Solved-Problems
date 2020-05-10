#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    int testCases,activities, s, e, answer, finish;
    scanf("%d",&testCases);
    while(testCases--)
    {
        scanf("%d",&activities);
        vector< pair<int,int> > v;
        for(int i = 0; i < activities; i++)
        {
            scanf("%d %d", &s, &e);
            v.push_back(make_pair(e,s));
        }
        sort(v.begin(),v.end());
        /*cout << "-----------------------------------" << endl;
        for(int i = 0; i < activities; i++)
            cout << v.at(i).first << " <--> " << v.at(i).second << endl;
        cout << "-----------------------------------" << endl;*/
        answer = 1;
        finish = v.at(0).first;
        for(int i = 1; i < activities; i++)
        {
            if(v.at(i).second >= finish && v.at(i).first != finish)
            {
                ++answer;
                finish = v.at(i).first;
            }
        }
        printf("%d\n", answer);
    }
    return 0;
}
