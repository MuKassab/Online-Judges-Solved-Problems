#include <iostream>

using namespace std;

int main()
{
    int row1 , row2 , col1 , col2 , diag1 , diag2;
    int num1 , num2 , num3 , num4;
    int num1ch , num2ch , num3ch , num4ch;
    cin >> row1 >> row2 >> col1 >> col2 >> diag1 >> diag2;
    for (int i = 1; i < 10; ++i)
    {
        num1 = i;
        for (int j = 1; j < 10; ++j)
        {
            num2 = j;
            if ((num1 + num2) == row1&& i != j)
            {
                num1ch = num1;
                num2ch = num2;
            }
        }
        if (num1ch > 0 && num1ch < 10)
            break;
    }
    for (int i = 1; i < 10; ++i)
    {
        num3 = i;
        for (int j = 1; j < 10; ++j)
        {
            num4 = j;
            if ( (num3 + num4) == row2 && (num1ch+num3) == col1 && (num2ch+num4) == col2 && (num1ch + num4) == diag1 && (num2ch + num3) == diag2 && num3 != num4 && num3 != num2ch && num3 != num1ch)
            {
                num3ch = num3;
                num4ch = num4;
            }
        }
        if (num3ch > 0 && num3ch < 10)
            break;
    }
    cout << num1ch << " " << num2ch << endl;
    cout << num3ch << " " << num4ch << endl;
    return 0;
}
