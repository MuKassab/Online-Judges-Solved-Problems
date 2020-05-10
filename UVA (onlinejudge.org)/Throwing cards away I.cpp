#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int x;
    cin >> x;
    while(x != 0)
    {
        queue<int> dq;
        int a;
        for(int i = 1; i <= x; i++)
            dq.push(i);
        if(x!=1){
        cout << "Discarded cards: ";
        while(dq.size() >= 2)
        {
            cout << dq.front();
            dq.pop();
            a = dq.front();
            dq.pop();
            dq.push(a);
            if(dq.size() >= 2)
                cout << ", ";
        }
        cout << endl;
        cout << "Remaining card: " << dq.front() << endl;}
        else
        {
            cout << "Discarded cards:" << endl;
            cout << "Remaining card: 1" << endl;
        }
        cin >> x;
    }
    return 0;
}
