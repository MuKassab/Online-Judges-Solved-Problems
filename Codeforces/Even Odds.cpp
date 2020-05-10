#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned long long n, k;
    cin >> n >> k;
    if (n % 2 == 0){
        if (k <= n/2)
            cout << 1 + (k-1)*2;
        else
            cout << 2 + (k - (n/2) - 1)*2;
    }
    else {
        if (k <= n/2 + 1)
            cout << 1 + (k-1)*2;
        else
            cout << 2 + (k - (n/2) - 2) * 2;
    }
       return 0;
}

