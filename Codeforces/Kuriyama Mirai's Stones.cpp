#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    long long int n,l,r;
    scanf("%lld",&n);
    long long int q[n],s[n];
    for(long long int i = 0; i < n; i++)
    {
        scanf("%lld",q+i);
        s[i] = q[i];
    }
    sort(s,s+n);
    for(long long int i = 1; i < n; i++)
    {
        q[i] += q[i-1];
        s[i] += s[i-1];
    }
    //cout << q[0] << " - " << s[0] << " - " << q[n-1] << " - " << s[n-1] << endl;
    long long int qu,type;
    scanf("%lld",&qu);
    //cout << q[0] << " - " << q[1] << " - " << q[2] << " - " << q[3] << " - " << q[4] << " - " << q[5] << endl;
    while(qu--)
    {
        scanf("%lld%lld%lld",&type,&l,&r);
        //cout << type << " x " << endl;
        if(type == 1)
        {
            //cout << "r-1 --> " << r-1 << "  & l-2 " << l-2 << endl;
            if(l == 1)
                printf("%lld\n",q[r-1]);
            else
                printf("%lld\n",q[r-1]-q[l-2]);
        }
        else
        {
            if(l == 1)
                printf("%lld\n",s[r-1]);
            else
                printf("%lld\n",s[r-1]-s[l-2]);
        }
    }
    return 0;
}
