#include <iostream>
//#include <vector>
//#include <algorithm>

using namespace std;

int main()
{
    int x,m,a = 0,ones = 0,ans = 0;
    cin >> x;
    int arr[x];
    //vector<int> v;
    for(int i = 0; i < x; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
            ++ones;
    }
    /*if(x == ones)
    {
        cout << x - 1 << endl;
        return 0;
    }*/
    for(int i = 0; i < x; i++)
    {
        m= ones;
        //if(arr[i] != 1)
        //{
            for(int j = i; j < x; j++)
            {
                if(arr[j] == 0)
                    ++m;
                else
                    --m;
                a = max(a,m);
            }
            //v.push_back(a);
            ans = max(ans,a);
        //}
    }
    //sort(v.begin(),v.end());
    //cout << v.at(v.size()-1) << endl;
    cout << ans << endl;
    return 0;
}
