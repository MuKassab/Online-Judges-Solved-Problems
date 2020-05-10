#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,m,k,t,a,b,plant = 0; //0 carrot 1 kiwi 2 grapes
    scanf("%d %d %d %d",&n,&m,&k,&t);
    pair<int,int> waste[k];
    for(int i = 0; i < k; i++)
    {
        scanf("%d %d",&a,&b);
        waste[i] = {a,b};
    }
    for(auto a : waste)
    {
        cout << a.first << " - " << a.second << endl;
    }
    return 0;
}
