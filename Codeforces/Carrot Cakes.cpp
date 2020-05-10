#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int totalTime = ceil((double)n/k) * t;
    //When Am I Operational with second oven
    int currentlyBaked = ceil((double)d/t) * k;
    if(d % t == 0 && n - currentlyBaked <= k)
        cout << "No" << endl;
    else if(currentlyBaked < n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
