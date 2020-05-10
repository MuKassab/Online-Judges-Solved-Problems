#include <iostream>

using namespace std;

int main()
{
    long long int a ,b ,mini, maxi, st, ans = 0,add,c;
    cin >> a >> b;
    mini = min(a,b);
    maxi = max(a,b);
    for(int i = 1; i <= mini; i++)
    {
        st = 5;
        c = maxi;
        add = ((i/5) * 5) - i +5;
        //cout << add << endl;
        if(add <= c)
        {
            ans++;
            c -= add;
            ans += c / 5;
        }
    }
    cout << ans;
    return 0;
}
