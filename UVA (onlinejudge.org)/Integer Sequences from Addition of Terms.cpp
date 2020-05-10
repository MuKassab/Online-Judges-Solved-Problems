#include<bits/stdc++.h>

using namespace std;

long long int t, x, currLen;
long long int arr[25];
long long int p, d, k, l;
string coeff;
stringstream ss;

long long int cal(int n)
{
    long long int q = 0;
    for(int i = 0; i < p; i++)
        q += arr[i] * pow(n, i);
    return q;
}

int main()
{
    cin >> t;
    cin.ignore();
    while(t--)
    {
        currLen = 0;
        cin >> p;
        ++p;
        for(int i = 0; i < p; i++)
            cin >> arr[i];
        cin >> d >> k;
        for(int i = 1; ;i++)
        {
            currLen += i * d;
            if(currLen >= k)
            {
                cout << cal(i) << endl;
                break;
            }
        }
    }
    return 0;
}



