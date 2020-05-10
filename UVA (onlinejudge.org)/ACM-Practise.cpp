#include <iostream>
#include <cstdio>   ///Scanf & printf
#include <string>
using namespace std;

int main()
{


    /**** ()()([][][]) Question
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        for(int j = 0; j < arr[i].length()-1;j++)
        {
            if(arr[i][j] == '(')
            {
                if(arr[i][j+1] == ')')
                {
                    arr[i].erase(j,2);
                    if(j - 2 >= 0)
                        j -= 3;
                    else
                        j = -1;
                }
            }
            else if(arr[i][j] == '[')
            {
                if(arr[i][j+1] == ']')
                {
                    arr[i].erase(j,2);
                    if(j - 2 >= 0)
                        j -= 3;
                    else
                        j = -1;
                }
            }
            if(arr[i].length() == 0)
                break;
        }
        if(arr[i].length() == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }*/

    return 0;
}

///----------------------------------------------------------------
/**********priority_queue*************
    initialization
        priority_queue<data type> name;
    methods :
        push() , pop() , top()..
--------------------------------------------------------------------
***********Scanf , printf**************
    include
        #include <cstdio.h>
    initialization
        -scanf( %datatype , &variable )
            datatype ...
                ->d   ---> int
                ->lld ---> long long int
                ->f   ---> float
                ->lf  ---> double
                ->c   ---> char
                CAN'T USE STRING WITH SCANF , INSTEAD WE USE ARRAY OF CHARS
                ->s   ---> array of chars , we also remove the & sign before the name of the array
        -printf( datatype , variable) "No & Sign"
            -example
                printf("Hello ,"%s\n" , r) "r IS A CHAR ARRAY"
*////
