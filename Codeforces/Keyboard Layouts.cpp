#include <iostream>

using namespace std;

int main()
{
    string fl, sl, ty;
    cin >> fl >> sl >> ty;
    int a = ty.length(),pr;
    bool found = 0,lower;
    char x;
    for(int i = 0; i < a; i++)
    {
        found = 0;
        lower = 1;
        x = tolower(ty[i]);
        if(x != ty[i])
            lower = 0;
        for(int j = 0; j < 26; j++)
        {
            if(x == fl[j])
            {
                if(lower)
                    cout << (char)tolower(sl[j]);
                else
                    cout << (char)toupper(sl[j]);
                found = 1;
                break;
            }
        }
        if(!found)
            cout << ty[i];
    }
    return 0;
}
