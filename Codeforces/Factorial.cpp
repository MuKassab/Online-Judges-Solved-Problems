#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = 1 , x =1;
    for (int i =0; i < n; ++i )
    {

        result =  result * x;
        x++;
    }
    cout << result;
    return 0;
}
