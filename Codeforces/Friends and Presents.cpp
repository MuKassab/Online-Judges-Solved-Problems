#include <iostream>
#include <cstdio>

using namespace std;

long long int firstFr, secondFr, primeO, primeT, low, high, mid, divByFirstPr, divBySecondPr, divByBothPr, remaining;
long long int posForFirstFr, posForSecFr, neededForFirstFr, neededForSecFr;

int binraySearch()
{
    low = 0, high = 4e9;
    while(low < high)
    {
        posForFirstFr = posForSecFr = 0;
        mid = low + (high-low)/2;
        divByFirstPr = mid / primeO;
        divBySecondPr = mid / primeT;
        divByBothPr = mid / (primeO*primeT);
        if(primeO == primeT)
            divByBothPr = 0;
        //cout << low << " * " << high << endl;
        //cout << mid << " - " << divByFirstPr << " - " << divBySecondPr << " - " << divByBothPr << endl;
        if(primeO != primeT)
        {
            posForFirstFr =  divBySecondPr - divByBothPr;
            posForSecFr = divByFirstPr - divByBothPr;
        }
        remaining = mid - (divByFirstPr + divBySecondPr - divByBothPr);
        //cout << remaining << " / " << posForFirstFr << " / " << posForSecFr << endl;
        neededForFirstFr = firstFr - posForFirstFr;
        neededForSecFr = secondFr - posForSecFr;
        if(neededForFirstFr < 0)
            neededForFirstFr = 0;
        if(neededForSecFr < 0)
            neededForSecFr = 0;
        //cout << neededForFirstFr << " + " << neededForSecFr << endl << endl;
        if(neededForFirstFr + neededForSecFr <= remaining)
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

int main()
{
    ios::sync_with_stdio(0);
    scanf("%d%d%d%d", &firstFr, &secondFr, &primeO, &primeT);
    printf("%d\n",binraySearch());
    return 0;
}
