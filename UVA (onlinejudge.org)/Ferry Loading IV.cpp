#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    int c,times;
    double fl, ca, board, cl;
    string d;
    cin >> c;
    while(c--)
    {
        times = 0;
        queue< pair<double,string> > lcars,rcars;
        cin >> fl >> ca;
        for(int i = 0; i < ca; i++)
        {
            cin >> cl >> d;
            if(d == "left")
                lcars.push( make_pair(cl/100,d) );
            else
                rcars.push( make_pair(cl/100,d) );
        }
        while(ca--)
        {
            board = 0;
            if(!lcars.empty() || !rcars.empty())
                    ++times;
            while(board <= fl && !lcars.empty())
            {

                if(board + lcars.front().first <= fl)
                    board += lcars.front().first;
                else
                    break;
                lcars.pop();
                if(lcars.empty())
                    break;
            }
            if(!lcars.empty() || !rcars.empty())
                ++times;
            board = 0;
            while(board <= fl && !rcars.empty())
            {
                if(board + rcars.front().first <= fl)
                    board += rcars.front().first;
                else
                    break;
                rcars.pop();
                if(rcars.empty())
                    break;
            }
            if(rcars.empty() && lcars.empty())
                break;
        }
        cout << times << endl;
    }
    return 0;
}
