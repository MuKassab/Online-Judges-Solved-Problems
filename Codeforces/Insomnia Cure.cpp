#include <iostream>

using namespace std;

int main()
{
    int k , l , m , n , d , suffer = 0;
    cin >> k >> l >> m >> n >> d;
    int arr[d+1];
    for(int i = 1; i < d+1; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % l == 0 || i % n == 0)
            ++suffer;
    }
    cout << suffer;
    return 0;
}
