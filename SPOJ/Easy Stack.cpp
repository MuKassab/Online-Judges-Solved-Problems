#include <iostream>
#include <stack>
#include <cstdio>

using namespace std;

int main() {
	stack<int> st;
	int t,op,add;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&op);
		if(op == 1)
		{
			scanf("%d",&add);
			st.push(add);
		}
		else if(op == 2)
		{
			if(!st.empty())
				st.pop();
		}
		else
		{
			if(!st.empty())
				printf("%d\n",st.top());
			else
				puts("Empty!");
		}
	}
	return 0;
}
