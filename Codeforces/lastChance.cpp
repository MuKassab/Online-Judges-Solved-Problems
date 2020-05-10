#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 50;
char f[N], s[N];

int twoPointers()
{
    string a, b;
    a = f;
    b = s;
    int l = 0, r = 0, nm = 0, req = b.length();
    int freq[30] = {0}, c[30] = {0};
    for(int i = 0; i < req; i++)
    {
        ++freq[b[i] - 'a'];
        c[b[i] - 'a'] = freq[b[i] - 'a'];
    }
    while(l < a.length())
    {

    }
}

int main()
{
    //freopen("","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",f);
        scanf("%s",s);
    }
    return 0;
}
