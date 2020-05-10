#include <iostream>

using namespace std;

int main()
{
    string bg = "I hate ", l = "that I love ", h = "that I hate ";
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        if(i & 1)
            bg += h;
        else
            bg += l;
    }
    cout << bg << "it";
    return 0;
}
