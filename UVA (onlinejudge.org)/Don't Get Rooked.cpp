#include <bits/stdc++.h>

using namespace std;

int n, curr, maxi, lr, lc;
bool lastr, lastc;
char arr[5][5];
int freq[5][5];

bool validOption(int r, int c)
{
    lastr = lastc = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[r][i] == 'B' && lastr) return false;
        else if(arr[r][i] == 'B') lastr = 1;
        else if(arr[r][i] == 'X') lastr = 0;
        if(arr[i][c] == 'B' && lastc) return false;
        else if(arr[i][c] == 'B') lastc = 1;
        else if(arr[i][c] == 'X') lastc = 0;
    }
    return true;
}

void getTheMaxiumumRooks()
{
    if(!validOption(lr,lc)) return;
    maxi = max(curr,maxi);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] != '.' || freq[i][j]) continue;
            arr[i][j] = 'B';
            freq[i][j] = 1;
            ++curr;
            lr = i; lc = j;
            getTheMaxiumumRooks();
            arr[i][j] = '.';
            --curr;
            freq[i][j] = 0;
        }
    }
}

int main()
{
    while(cin >> n && n)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                freq[i][j] = 0;
            }
        }
        curr = maxi = lr = lc = 0;
        getTheMaxiumumRooks();
        cout << maxi << endl;
    }
    return 0;
}
