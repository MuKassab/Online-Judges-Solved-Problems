#include <bits/stdc++.h>

using namespace std;

#define timesaver ios::sync_with_stdio(0);cin.tie(0);
#define loop(n)    for(int i = 0; i < n; i++)
const double EPS = 0.00000001;

int main()
{
	//freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
	timesaver;
	//**************************************************************************
	int dig, sum, maxi, t;
	cin >> dig >> sum;
	maxi = dig * 9;
	if(sum > maxi || (sum == 0 && dig > 1))
    {
        cout << "-1 -1" << endl;
        return 0;
    }
    int arr[dig] = {};
    t = sum;
    for(int i = dig - 1; dig >= 0; i--)
    {
        if(sum - 9 >= 1)
        {
            arr[i] = 9;
            sum -= 9;
        }
        else
        {
            if(i == 0) arr[i] = sum;
            else arr[i] = sum-1, arr[0] = 1;
            break;
        }
    }
    for(int i = 0; i < dig; i++)
        cout << arr[i];
    cout << " ";
    sum = t;
    int ans2[dig] = {};
    for(int i = 0; i < dig; i++)
    {
        ans2[i] = ((sum >= 9)? 9: sum);
        sum -= 9;
        if(sum <= 0) break;
    }
    loop(dig) cout << ans2[i];
	return 0;
}
