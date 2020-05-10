#include <iostream>

using namespace std;

int main()
{
    int a , b , c;
    cin >> a >> b >> c;
    int op1 = a * b * c;
    int op2 = (a+b) * c;
    int op3 = a * (b+c);
    int op4 = a + b + c;
    if (op1 >= op2 && op1 >= op3 && op1 >= op4)
        cout << op1;
    else if (op2 >= op1 && op2 >= op3 && op2 >=op4)
        cout << op2;
    else if (op3 >= op1 && op3 >= op2 && op3 >= op4)
        cout << op3;
    else
        cout << op4;

    return 0;
}
