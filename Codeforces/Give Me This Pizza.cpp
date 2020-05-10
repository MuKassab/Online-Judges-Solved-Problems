#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    int l,a;
    scanf("%d",&l);
    vector<int> arr;
    for(int i = 0; i < l; i++)
    {
        scanf("%d",&a);
        arr.push_back(a);
    }
    bool ch;
    for(vector<int>::iterator i = arr.begin(); i != arr.end()-1; i++)
    {
        ch = 0;
        for(vector<int>::iterator j = i + 1; j != arr.end(); j++)
        {
            if(*j > *i)
            {
                ch = 1;
                printf("%d ",*j);
                break;
            }
        }
        if(!ch)
            printf("%d ",-1);
    }
    printf("%d ",-1);
    return 0;
}
