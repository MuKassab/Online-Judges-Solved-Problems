#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, maxNeg = INT_MIN,a,ans = INT_MIN,sq;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        sq = sqrt(a);
        if(a <= 0)
            maxNeg = max(maxNeg,a);
        else if(sq * sq != a)
            ans = max(ans,a);
    }
    cout << max(maxNeg,ans) << endl;
    return 0;
}
