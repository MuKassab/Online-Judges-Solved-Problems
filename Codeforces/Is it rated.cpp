#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    bool rated = 0, maybe = 1;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(a != b)
            rated = 1;
        if(i > 0)
        {
            if(a > c)
                maybe = 0;
        }
        c = a;
    }
    if(rated)
        cout << "rated" << endl;
    else if(maybe)
        cout << "maybe" << endl;
    else
        cout << "unrated" << endl;
    return 0;
}
