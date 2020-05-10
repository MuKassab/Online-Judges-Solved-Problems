#include <iostream>

using namespace std;

int main()
{
    long long int oneC, twoC, threeC, fourC , sum = 0;
    string x;
    cin >> oneC >> twoC >> threeC >> fourC >> x;
    for (int i = 0;i < x.length();i++)
    {
        if (x[i] == '1')
            sum += oneC;
        else if (x[i] == '2')
            sum += twoC;
        else if (x[i] == '3')
            sum += threeC;
        else
            sum += fourC;
    }
    cout << sum;
    return 0;
}
