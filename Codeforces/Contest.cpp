#include <iostream>

using namespace std;

int main()
{
    int a , b , c , d , misha , vasya;
    cin >> a >> b >> c >> d;
    misha = max(((3*a)/10),a-((a/250)*c));
    vasya = max(((3*b)/10),b-((b/250)*d));
    if(misha>vasya)
        cout << "Misha";
    else if (misha < vasya)
        cout << "Vasya";
    else
        cout << "Tie";
    return 0;
}
