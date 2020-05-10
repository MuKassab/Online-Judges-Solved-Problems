#include <iostream>
#include <cstdio>
#include <cmath>


using namespace std;

double x,y,c,a,b,low,high,mid,cmp;
double eps = 1e-9;
double binarySearch()
{
    low = 0;
    if(x - y >= 0.0001)
        high = y;
    else
        high = x;
    x*=x;
    y*=y;
    while(true)
    {
        mid = (high + low) / 2;
        //cmp is the should be width
        cmp = (c * mid) / sqrt(x - mid * mid) + (c * mid) / sqrt(y - mid * mid);
        if(fabs(cmp-mid) <= eps)
        {
            //cout << " --- " << cmp << endl;
            return cmp;
        }
        if(cmp > mid)
            high = mid;
        else
            low = mid;
        //cout << cmp << endl;
    }
}

int main()
{
    while(scanf("%lf %lf %lf",&x, &y, &c) == 3)
        printf("%0.3f\n",binarySearch());
    return 0;
}


/*7al tany sa7

#include <iostream>
#include <cstdio>
#include <cmath>


using namespace std;

double x,y,c,a,b,low,high,mid,cmp;
//a is the height of the first building
//b is the height of the second building
//from geometry ( c ) should be equal to (a*b)/(a+b)
double binarySearch()
{
    low = 0;
    if(x - y >= 0.0001)
        high = y;
    else
        high = x;
    x*=x;
    y*=y;
    int i = 0;
    while(true)
    {
        if(i == 100)
            break;
        //cout << "low : " << low << " - High : " << high << endl;
        mid = (high + low) / 2;
        a = sqrt(x - mid*mid);
        b = sqrt(y - mid*mid);
        //cout << a*b << " - " << a + b << endl;
        cmp = (a*b)/(a+b);
        //cout <<"mid : " << mid << " - a : " << a << " - b : " << b << " - cmp : " << cmp << endl << endl;
        if(cmp <= c)
            high = mid;
        else
            low = mid;
        ++i;
    }
    return (high+low)/2;
}

int main()
{
    while(scanf("%lf %lf %lf",&x, &y, &c) == 3)
        printf("%0.3f\n",binarySearch());
    return 0;
}
*/
