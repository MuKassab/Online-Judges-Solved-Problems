#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    int c, a,x,b;
    cin >> c;
    vector<int> v,vo;
    vo.resize(c,0);
    for(int i = 0; i < c; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    for(int i = 1; i < v.size(); i++)
    {
        if(v.at(i) < v.at(i-1))
        {
            b = v.at(i);
            v.at(i) += v.at(i-1)-b;
            v.at(i-1) -= v.at(i-1)-b;
            if(i-2 <= 0)
                i = 0;
            else
                i = i-2;
        }
    }
    for(int i = 0; i < c; i++)
    {
        cout << v.at(i) << " ";
    }
    return 0;
}
